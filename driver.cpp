/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/

#include <iostream>
#include <string>
#include <algorithm>
#include "image/Pixel.h"
#include "image/Header.h"
#include "image/Image.h"
#include "filter/SharpenFilter.h"
#include "filter/BlurFilter.h"
#include "filter/HFlipFilter.h"
#include "filter/VFlipFilter.h"
#include "filter/BinaryFilter.h"
#include "filter/SepiaFilter.h"
#include "filter/GrayscaleFilter.h"
#include "filter/Menu.h"

using namespace std;


int main(int argc, char const *argv[]) {

  //create filters, assign names, and create pointers for filter vector
  SharpenFilter Sharpenfil("Sharpen Filter");
  SharpenFilter * Sharpenfilt = &Sharpenfil;
  BlurFilter Blurfil("Blur Filter");
  BlurFilter * Blurfilt = &Blurfil;
  HFlipFilter Hflipfil("Horizontal Flip Filter");
  HFlipFilter * Hflipfilt = &Hflipfil;
  VFlipFilter Vflipfil("Vertical Flip Filter");
  VFlipFilter * Vflipfilt = &Vflipfil;
  //default values I chose for inital binary filter state. Arbitrary.
  Pixel col1 (100,100,100);
  Pixel col2 (0, 150, 0);
  BinaryFilter Binaryfil("Binary Filter", col1, col2);
  BinaryFilter * Binaryfilt = &Binaryfil;
  SepiaFilter Sepiafil("Sepia Filter");
  SepiaFilter * Sepiafilt = &Sepiafil;
  GrayscaleFilter Grayscalefil("Grayscale Filter");
  GrayscaleFilter * Grayscalefilt = &Grayscalefil;

  //create list for menu object
  vector<Filter*> menuopt;
  menuopt.resize(7);
  menuopt[0] = Sharpenfilt;
  menuopt[1] = Blurfilt;
  menuopt[2] = Hflipfilt;
  menuopt[3] = Vflipfilt;
  menuopt[4] = Binaryfilt;
  menuopt[5] = Sepiafilt;
  menuopt[6] = Grayscalefilt;

  //create filter menu object
  Menu FiltMenu("Filter menu", menuopt);
  //Run options and apply them
  //Asks user for input file
  //also automatically closes files.
  FiltMenu.Choose();


  return 0;

}
