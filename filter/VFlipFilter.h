/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
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

  public:
    VFlipFilter();
    VFlipFilter(string);
    VFlipFilter(const Filter&);
    ~VFlipFilter ();


    virtual void apply (Image&) const;
};

#endif
