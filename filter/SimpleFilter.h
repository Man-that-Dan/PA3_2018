/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#ifndef SIMPLEFILTER_H
#define SIMPLEFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "Filter.h"

using namespace std;

class SimpleFilter : public Filter {
  protected:

    SimpleFilter();
    SimpleFilter(string);
    SimpleFilter(const Filter&);
  



  public:
    // Pure virtual destructor - Still needs definition!
    virtual ~SimpleFilter () = 0;


    // Pure virtual- every derived class must implement
    //                  - or be abstract itself
    virtual void apply (Image&) const = 0;
};

#endif
