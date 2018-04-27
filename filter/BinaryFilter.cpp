/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#include "BinaryFilter.h"


BinaryFilter::BinaryFilter() :
  PixelFilter("") {}

BinaryFilter::BinaryFilter(string name) :
  PixelFilter(name) {}

//constructor sets colors for filter
BinaryFilter::BinaryFilter(string name, Pixel& pix1, Pixel& pix2) :
  PixelFilter(name) {
    this->color1 = pix1;
    this->color2 = pix2;
  }

BinaryFilter::BinaryFilter(const Filter& f) :
  PixelFilter(f)  {}

BinaryFilter::~BinaryFilter() {}


// takes a pixel and checks luminance, then applies a color based on result
// returns a pixel
Pixel BinaryFilter::apply_transform(const Pixel& pix) const{

  int lumin = pix.luminance();
  if(lumin > 255/2){
    return this->color1;
  } else {
    return this->color2;
  };

};
