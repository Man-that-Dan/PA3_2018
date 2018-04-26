/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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
  //create image to fill in reverse
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
        cout << "Pixel: " << x << y << endl;
        cout << img(x,y).r() < endl;
        cout << copy(x,y).r() < endl;
        img(x,y) = copy(x,y);
        cout << img(x,y).r() < endl;
      }
    }
}
