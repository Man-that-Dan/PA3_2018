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

    Pixel color1;
    Pixel color2;

    virtual Pixel apply_transform(const Pixel&) const;

  public:
    BinaryFilter();
    BinaryFilter(string);
    BinaryFilter::BinaryFilter(string name, Pixel& pix1, Pixel& pix2);
    BinaryFilter(const Filter&);
    ~BinaryFilter ();



    // Public Interface - every derived class must implement
    //                  - or be abstract itself


};

#endif
