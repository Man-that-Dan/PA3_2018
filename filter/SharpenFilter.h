/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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



    // Derived classes need these visible
    
    using Matrix = vector<vector<double>>;
    static Matrix K3;

  public:
    SharpenFilter();
    SharpenFilter(string);
    SharpenFilter(const Filter&);
    ~SharpenFilter ();


    // Public Interface - every derived class must implement
    //                  - or be abstract itself
    virtual void apply (Image&) const;
};

#endif
