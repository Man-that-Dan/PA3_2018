/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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



    virtual Pixel apply_transform(const Pixel&);

  public:
    BinaryFilter();
    BinaryFilter(string);
    BinaryFilter(const Filter&);
    ~BinaryFilter ();

    Pixel color1;
    Pixel color2;

    // Public Interface - every derived class must implement
    //                  - or be abstract itself


};

#endif
