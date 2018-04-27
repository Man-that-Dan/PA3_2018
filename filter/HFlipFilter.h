/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
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


  public:
    HFlipFilter();
    HFlipFilter(string);
    HFlipFilter(const Filter&);
    ~HFlipFilter ();

    //virtual apply function inhereted from parent
    virtual void apply (Image&) const;
};

#endif
