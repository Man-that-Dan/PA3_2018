/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#ifndef PIXELFILTER_H
#define PIXELFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "Filter.h"

using namespace std;

class PixelFilter : public Filter {
  protected:



    // Derived classes need these visible
    PixelFilter();
    PixelFilter(string);
    PixelFilter(const Filter&);
    virtual Pixel apply_transform(const Pixel&) const = 0;;

  public:

    virtual ~PixelFilter () = 0;

    // this apply is not pure virtual, child classes use this
    virtual void apply (Image&) const;
};

#endif
