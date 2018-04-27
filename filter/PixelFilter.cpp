/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#include "PixelFilter.h"

PixelFilter::PixelFilter() :
  Filter("") {}

PixelFilter::PixelFilter(string name) :
  Filter(name) {}

PixelFilter::PixelFilter(const Filter& f) :
  Filter(f)  {}

PixelFilter::~PixelFilter() {}

void PixelFilter::apply(Image& img) const {

  int img_rows = img.header().height();
  int img_cols = img.header().width();

  // Make reference image
  Image copy(img);

  // Apply a transform to each pixel
  // actual transform is pure virtual
  // each child class will implement its own transform
  for (int y = 0; y < img_rows; y++) {
    for (int x = 0; x < img_cols; x++) {
      img(x,y) = this->apply_transform(copy(x, y));
    }
  }
}
