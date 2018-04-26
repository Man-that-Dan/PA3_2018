/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/

#ifndef VFLIPFILTER_H
#define VFLIPFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "SimpleFilter.h"

using namespace std;

class VFlipFilter : public SimpleFilter {
  protected:



    // Derived classes need these visible


  public:
    VFlipFilter();
    VFlipFilter(string);
    VFlipFilter(const Filter&);
    ~VFlipFilter ();


    // Public Interface - every derived class must implement
    //                  - or be abstract itself
    virtual void apply (Image&) const;
};

#endif
