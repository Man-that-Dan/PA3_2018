/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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
    virtual Pixel apply_transform(const Pixel&) const;

  public:
    // Pure virtual destructor - Still needs definition!
    virtual ~PixelFilter () = 0;


    // Public Interface - every derived class must implement
    //                  - or be abstract itself
    virtual void apply (Image&) const = 0;
};

#endif
