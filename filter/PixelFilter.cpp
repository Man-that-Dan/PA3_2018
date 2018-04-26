/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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

  // Apply kernel to each pixel
  // Omit outer edges. Simplest solution
  for (int y = 0; y < img_rows; y++) {
    for (int x = 0; x < img_cols; x++) {
      img(x,y) = this->apply_transform(copy(x, y));
    }
  }
}
