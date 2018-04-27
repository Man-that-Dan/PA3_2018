/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/

#ifndef BLURFILTER_H
#define BLURFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "KernelFilter.h"

using namespace std;

class BlurFilter : public KernelFilter {
  protected:

    //matrix similar to sharpen filter 
    using Matrix = vector<vector<double>>;
    static Matrix K3;

  public:
    BlurFilter();
    BlurFilter(string);
    BlurFilter(const Filter&);
    ~BlurFilter ();


    virtual void apply (Image&) const;
};

#endif
