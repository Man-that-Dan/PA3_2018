/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/
#include "SimpleFilter.h"

SimpleFilter::SimpleFilter() :
  Filter("") {}

SimpleFilter::SimpleFilter(string name) :
  Filter(name) {}

SimpleFilter::SimpleFilter(const Filter& f) :
  Filter(f)  {}

SimpleFilter::~SimpleFilter() {}



void SimpleFilter::apply(Image& img, const Matrix& k) const {
  int k_center = k.size()/2;
  int img_rows = img.header().height();
  int img_cols = img.header().width();

  // Make reference image
  Image copy(img);

  // Apply kernel to each pixel
  // Omit outer edges. Simplest solution
  for (int y = k_center; y < img_rows-k_center; y++) {
    for (int x = k_center; x < img_cols-k_center; x++) {
      img(x,y) = this->apply_kernel(copy, x, y, k);
    }
  }
}
