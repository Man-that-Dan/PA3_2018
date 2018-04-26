/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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



    // Public Interface - every derived class must implement
    //                  - or be abstract itself


};

#endif
