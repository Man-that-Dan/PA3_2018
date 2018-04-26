/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/
#ifndef KERNELFILTER_H
#define KERNELFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "Filter.h"

using namespace std;

class KernelFilter : public Filter {
  protected:



    // Derived classes need these visible
    KernelFilter();
    KernelFilter(string);
    KernelFilter(const Filter&);
    using Matrix = vector<vector<double>>;
    virtual void apply(Image&, const Matrix&) const;
    virtual Pixel apply_kernel(Image&, int x, int y, const Matrix&) const;

  public:
    // Pure virtual destructor - Still needs definition!
    virtual ~KernelFilter () = 0;


    // Public Interface - every derived class must implement
    //                  - or be abstract itself
    virtual void apply (Image&) const = 0;
};

#endif
