/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#ifndef MENU_H
#define MENU_H

#include <cstdlib>
#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "SharpenFilter.h"
#include "BlurFilter.h"
#include "HFlipFilter.h"
#include "VFlipFilter.h"
#include "BinaryFilter.h"
#include "SepiaFilter.h"
#include "GrayscaleFilter.h"


using namespace std;

class Menu {
  protected:

    string name;
    //list of filters
    vector<Filter*> Options;
    //input filename
    string filename;


  public:
    Menu();
    Menu(string);
    Menu(vector<Filter*>);
    Menu(string, vector<Filter*>);
    Menu(const Menu&);
    // Pure virtual destructor - Still needs definition!
    ~Menu ();

    void Display();
    void Choose();


};

#endif
