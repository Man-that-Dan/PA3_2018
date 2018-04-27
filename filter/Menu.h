/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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
    // Data - Shows that abstract classes can still contain data
    string name;
    vector<Filter*> Options;
    string filename;

    // Derived classes need these visible


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
