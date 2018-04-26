/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/
#include "BinaryFilter.h"


BinaryFilter::BinaryFilter() :
  PixelFilter("") {}

BinaryFilter::BinaryFilter(string name) :
  PixelFilter(name) {}

BinaryFilter::BinaryFilter(const Filter& f) :
  PixelFilter(f)  {}

BinaryFilter::~BinaryFilter() {}

Pixel apply_transform(const Pixel& pix){
  cout << "Enter RGB values for two pixels. Six numbers. Example: 120 45 200 100 100 100" << endl;
  cin >> color1 >> color2;
  int lumin = pix.luminance();
  if(lumin > 255/2){
    return color1;
  } else {
    return color2;
  };

};
