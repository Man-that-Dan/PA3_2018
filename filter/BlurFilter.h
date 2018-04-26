/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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



    // Derived classes need these visible

    using Matrix = vector<vector<double>>;
    static Matrix K3;

  public:
    BlurFilter();
    BlurFilter(string);
    BlurFilter(const Filter&);
    ~BlurFilter ();


    // Public Interface - every derived class must implement
    //                  - or be abstract itself
    virtual void apply (Image&) const;
};

#endif
