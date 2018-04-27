/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/

#include "GrayscaleFilter.h"


GrayscaleFilter::GrayscaleFilter() :
PixelFilter("") {}

GrayscaleFilter::GrayscaleFilter(string name) :
PixelFilter(name) {}


GrayscaleFilter::GrayscaleFilter(const Filter& f) :
PixelFilter(f)  {}

GrayscaleFilter::~GrayscaleFilter() {}


// sets color of pixel to luminance. Makes a gray color
// returns pixel
Pixel GrayscaleFilter::apply_transform(const Pixel& pix) const{
   int color = pix.luminance();
   return Pixel(color, color, color);

};
