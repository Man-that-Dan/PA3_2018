/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#include "Menu.h"


using namespace std;

Menu::Menu() :
  name("Menu") {}

Menu::Menu(string name) :
  name(name) {}

Menu::Menu(const Menu& f) :
  name(f.name)  {}

Menu::~Menu() {}

Menu::Menu(vector<Filter*> options) :
  Options(options) {}

Menu::Menu(string name, vector<Filter*> options) :
  name(name), Options(options) {}



// Display function displays initial greetings and instructions
// no return value, no inputs
void Menu::Display(){
  //have user choose input file name. Throws error if file doesn't exist
  cout << "Enter an input filename: " << endl;
  cin >> this->filename;
  for(int i = 0; i < static_cast<int>(this->Options.size()); i++){
    cout << "Option: " << i << " " << Options[i]->Name() << endl;
  };
  cout << endl;
  cout << "Enter numbers corresponding to filters you would like to apply. ";
  cout << "End with -1" << endl;
  cout << "Example: 0 1 5 3 -1. Be sure to note order." << endl;


};

//choose function calls display then presents options.
void Menu::Choose(){
  vector<int> choices;
  int c = 0;
  //display the options
  this->Display();
  //checking for end digit
  while(c != -1){
    cin >> c;
    if(c != -1){
      //check for bounds of options list
      if(c >= static_cast<int>(Options.size())){
        cout << "Invalid choice." << endl;
        exit(1);
      };
      choices.push_back(c);
    };

 };
 // wasn't sure whether filters were to be applied to same or separate
 // having both options gives option for quick output of several cases
 cout << "Apply filters to same image or produce separate images?" <<endl;
 cout << "Type 1 for same, 2 for separate." << endl;
 cout << "(note: I did this because I was unsure of the directions)" << endl;
 cin >> c;
 int i;
 // check for need to free new binary filter later
 int free_it = 0;
 for(i = 0; i < static_cast<int>(choices.size()); i++){
   if((Options[choices[i]]->Name()) == "Binary Filter"){
     int r, g, b, r2, g2, b2;
     cout << " Enter six numbers for two pixels for Binary Filter" << endl;
     cout << " Numbers correspond to rgb values" << endl;
     cout << "Example: 200 155 103 11 45 100" << endl;
     cin >> r >> g >> b >> r2 >> g2 >> b2;
     Pixel Bin1(r, g, b);
     Pixel Bin2(r2, g2, b2);


     Options[choices[i]] = new BinaryFilter("Binary Filter", Bin1, Bin2);
     free_it = 1;
   }
 };

 //single image logic
 if(c == 1){
   ifstream input(this->filename);
   if (!(input)) {
     std::cerr << "Could not open input\n";
     exit(1);
   };

   ofstream output("EC_1.ppm");
   Image inImg(input);
   for(i = 0; i < static_cast<int>(choices.size()); i++){
     Options[choices[i]]->apply(inImg);
   };
   inImg.write_to(output);
   input.close();
   output.close();
 };

//multiple image logic
if(c == 2){
  ifstream input(this->filename);
  if (!(input)) {
    std::cerr << "Could not open input\n";
    exit(1);
  };
  vector<string> name;
  name.resize(choices.size());
  //create names for images
  for(i = 0; i < static_cast<int>(choices.size()); i++){
    string tmp;
    tmp = to_string(i);

    name[i] = string("EC") + tmp + string(".ppm");
  };
  //open images
  vector<ofstream> outfiles;
  outfiles.resize(choices.size());
  for(i = 0; i < static_cast<int>(choices.size()); i++){
    outfiles[i].open(name[i]);
  };
  Image inImg(input);
  vector<Image> outImgs;
  //create images
  for(i = 0; i < static_cast<int>(choices.size()); i++){
      outImgs.push_back(Image(inImg));
  };
  //apply filters and write images
  for(i = 0; i < static_cast<int>(choices.size()); i++){
    Options[choices[i]]->apply(outImgs[i]);
    outImgs[i].write_to(outfiles[i]);
    outfiles[i].close();
  };
  input.close();
};

//free up memory
for(i = 0; i < static_cast<int>(choices.size()); i++){
  if((Options[choices[i]]->Name()) == "Binary Filter" && free_it == 1){
    delete Options[choices[i]];
  };
};
};
