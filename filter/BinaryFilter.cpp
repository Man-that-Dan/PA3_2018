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

BinaryFilter::BinaryFilter(string name, Pixel& pix1, Pixel& pix2) :
    color1(pix1), color2(pix2), PixelFilter(name) {}

BinaryFilter::BinaryFilter(const Filter& f) :
  PixelFilter(f)  {}

BinaryFilter::~BinaryFilter() {}

Pixel BinaryFilter::apply_transform(const Pixel& pix) const{
  // Pixel a;
  // Pixel b;

  // const Pixel c = a;
  // const Pixel d = b;
  // this->color1 = c;
  // this->color2 = d;
  int lumin = pix.luminance();
  if(lumin > 255/2){
    return this->color1;
  } else {
    return this->color2;
  };

};
