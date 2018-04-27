/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/

#ifndef SHARPENFILTER_H
#define SHARPENFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "KernelFilter.h"

using namespace std;

class SharpenFilter : public KernelFilter {
  protected:

    // defines matrix keyword and own static matrix
    using Matrix = vector<vector<double>>;
    static Matrix K3;

  public:
    SharpenFilter();
    SharpenFilter(string);
    SharpenFilter(const Filter&);
    ~SharpenFilter ();

    virtual void apply (Image&) const;
};

#endif
