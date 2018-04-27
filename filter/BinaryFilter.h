/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/

#ifndef BINARYFILTER_H
#define BINARYFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "PixelFilter.h"

using namespace std;

class BinaryFilter : public PixelFilter {
  protected:

    // two colors to be used
    Pixel color1;
    Pixel color2;

    //transform function
    virtual Pixel apply_transform(const Pixel&) const;

  public:
    BinaryFilter();
    BinaryFilter(string);
    BinaryFilter(const Filter&);
    BinaryFilter(string name, Pixel& pix1, Pixel& pix2);
    ~BinaryFilter ();




};

#endif
