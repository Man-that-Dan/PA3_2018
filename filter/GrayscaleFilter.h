/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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

    virtual Pixel apply_transform(const Pixel&) const;

  public:
    GrayscaleFilter();
    GrayscaleFilter(string);
    GrayscaleFilter(const Filter&);
    ~GrayscaleFilter ();



    // Public Interface - every derived class must implement
    //                  - or be abstract itself


};

#endif
