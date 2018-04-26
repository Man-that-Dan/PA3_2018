/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/

#ifndef HFLIPFILTER_H
#define HFLIPFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "SimpleFilter.h"

using namespace std;

class HFlipFilter : public SimpleFilter {
  protected:



    // Derived classes need these visible


  public:
    HFlipFilter();
    HFlipFilter(string);
    HFlipFilter(const Filter&);
    ~HFlipFilter ();


    // Public Interface - every derived class must implement
    //                  - or be abstract itself
    virtual void apply (Image&) const;
};

#endif
