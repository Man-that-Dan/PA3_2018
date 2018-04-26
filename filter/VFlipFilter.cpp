/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/
#include "VFlipFilter.h"


VFlipFilter::VFlipFilter() :
  SimpleFilter("") {}

VFlipFilter::VFlipFilter(string name) :
  SimpleFilter(name) {}

VFlipFilter::VFlipFilter(const Filter& f) :
  SimpleFilter(f)  {}

VFlipFilter::~VFlipFilter() {}


// Flips image horizontally
void VFlipFilter::apply (Image& img) const{
  //create image to fill in reverse
  Image copy(img);
  int img_rows = img.header().height();
  int img_cols = img.header().width();
  int rev_x;

  //copy pixels into copy image in reverse along the y axis
  for (int y = 0; y < img_rows; y++) {
      for (int x = 0; x < img_cols; x++) {
        rev_y = img_rows - y;
        copy(x,y) = img(x, rev_y);
      }
    }

  // copy reversed image into original image
  for (int y = 0; y < img_rows; y++) {
      for (int x = 0; x < img_cols; x++) {
        img(x,y) = copy(x,y);
      }
    }
}
