/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#include "SepiaFilter.h"


SepiaFilter::SepiaFilter() :
  PixelFilter("") {}

SepiaFilter::SepiaFilter(string name) :
  PixelFilter(name) {}


SepiaFilter::SepiaFilter(const Filter& f) :
  PixelFilter(f)  {}

SepiaFilter::~SepiaFilter() {}


//Version 2 algorithm
// uses gamma expansion and inverse gamma functions to
// convert pixel to sepia then return new pixel
Pixel SepiaFilter::apply_transform(const Pixel& pix) const{
  double red = pix.r();
  double blue = pix.b();
  double green = pix.g();
  red = red/255.0;
  blue = blue/255.0;
  green = green/255.0;

  red = Pixel::gamma_expansion(red);
  blue = Pixel::gamma_expansion(blue);
  green = Pixel::gamma_expansion(green);

  double outRed = ((red * 0.393) + (green * 0.769) + (blue * 0.189));
  double outGreen = ((red * 0.349) + (green * 0.686) + (blue * 0.168));
  double outBlue = ((red * 0.272) + (green * 0.534) + (blue * 0.131));
  if(outRed > 1.0){
    red = Pixel::inverse_gamma(1.0);
  } else {
    red = Pixel::inverse_gamma(outRed);
  };
  if(outGreen > 1.0){
    green = Pixel::inverse_gamma(1.0);
  } else {
    green = Pixel::inverse_gamma(outRed);
  };
  if(outBlue > 1.0){
    blue = Pixel::inverse_gamma(1.0);
  } else {
    blue = Pixel::inverse_gamma(outRed);
  };

  //convert back to color space
  red = red * 255;
  blue = blue * 255;
  green = green * 255;
  //clamp back to an acceptable pixel value
  red = this->clamp(0.0, 255.0, red);
  blue = this->clamp(0.0, 255.0, blue);
  green = this->clamp(0.0, 255.0, green);

  return Pixel(red, green, blue);

};
