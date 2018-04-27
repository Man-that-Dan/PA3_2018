/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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

void Menu::Display(){
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

void Menu::Choose(){
  vector<int> choices;
  int c = 0;
  this->Display();
  while(c != -1){
    cin >> c;
    if(c != -1){
      if(c >= static_cast<int>(Options.size())){
        cout << "Invalid choice." << endl;
        exit(1);
      };
      choices.push_back(c);
    };

 };

 cout << "Apply filters to same image or produce separate images?" <<endl;
 cout << "Type 1 for same, 2 for separate." << endl;
 cout << "(note: I did this because I was unsure of the directions)" << endl;
 cin >> c;
 int i;
 for(i = 0; i < static_cast<int>(choices.size()); i++){
   if((Options[choices[i]]->Name()) == "Binary Filter"){
     int r, g, b, r2, g2, b2;
     cout << " Enter six numbers for two pixels for Binary Filter" << endl;
     cout << " Numbers correspond to rgb values" << endl;
     cout << "Example: 200 155 103 11 45 100" << endl;
     cin >> r >> g >> b >> r2 >> g2 >> b2;
     Pixel Bin1(r, g, b);
     Pixel Bin2(r2, g2, b2);
    //  BinaryFilter tempfilt("Binary Filter", Bin1, Bin2);
    //  Filter * tempfiltptr = &tempfilt;
    //  Options[choices[i]] = tempfiltptr;
   }
 };
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
if(c == 2){
  ifstream input(this->filename);
  if (!(input)) {
    std::cerr << "Could not open input\n";
    exit(1);
  };
  vector<string> name;
  name.resize(choices.size());
  for(i = 0; i < static_cast<int>(choices.size()); i++){
    string tmp;
    tmp = to_string(i);

    name[i] = string("EC") + tmp + string(".ppm");
  };
  vector<ofstream> outfiles;
  outfiles.resize(choices.size());
  for(i = 0; i < static_cast<int>(choices.size()); i++){
    outfiles[i].open(name[i]);
  };
  Image inImg(input);
  vector<Image> outImgs;
  for(i = 0; i < static_cast<int>(choices.size()); i++){
      outImgs.push_back(Image(inImg));
  };
  for(i = 0; i < static_cast<int>(choices.size()); i++){
    Options[choices[i]]->apply(outImgs[i]);
    outImgs[i].write_to(outfiles[i]);
    outfiles[i].close();
  };
  input.close();
};
};
