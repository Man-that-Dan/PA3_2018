/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/

#ifndef GRAYSCALEFILTER_H
#define GRAYSCALEFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "PixelFilter.h"

using namespace std;

class GrayscaleFilter : public PixelFilter {
  protected:
    //grays a pixel based on luminance
    virtual Pixel apply_transform(const Pixel&) const;

  public:
    GrayscaleFilter();
    GrayscaleFilter(string);
    GrayscaleFilter(const Filter&);
    ~GrayscaleFilter ();




};

#endif
