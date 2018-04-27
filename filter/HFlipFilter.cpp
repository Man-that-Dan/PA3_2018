/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#include "HFlipFilter.h"


HFlipFilter::HFlipFilter() :
  SimpleFilter("") {}

HFlipFilter::HFlipFilter(string name) :
  SimpleFilter(name) {}

HFlipFilter::HFlipFilter(const Filter& f) :
  SimpleFilter(f)  {}

HFlipFilter::~HFlipFilter() {}


// Flips image horizontally
void HFlipFilter::apply (Image& img) const{
  //create image to fill in reverse along x axis
  Image copy(img);
  int img_rows = img.header().height();
  int img_cols = img.header().width();
  int rev_x;

  //copy pixels into copy image in reverse along the x axis
  for (int y = 0; y < img_rows; y++) {
      for (int x = 0; x < img_cols; x++) {
        rev_x = img_cols - x;
        copy(x,y) = img(rev_x, y);
      }
    }

  // copy reversed image into original image
  for (int y = 0; y < img_rows; y++) {
      for (int x = 0; x < img_cols; x++) {

        img(x,y) = copy(x,y);

      }
    }
}
