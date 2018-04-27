/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/

#ifndef SEPIAFILTER_H
#define SEPIAFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "PixelFilter.h"

using namespace std;

class SepiaFilter : public PixelFilter {
  protected:

    virtual Pixel apply_transform(const Pixel&) const;

  public:
    SepiaFilter();
    SepiaFilter(string);
    SepiaFilter(const Filter&);
    ~SepiaFilter ();


};

#endif
