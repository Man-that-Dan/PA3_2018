/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/
#ifndef SimpleFILTER_H
#define SimpleFILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"
#include "Filter.h"

using namespace std;

class SimpleFilter : public Filter {
  protected:



    // Derived classes need these visible
    SimpleFilter();
    SimpleFilter(string);
    SimpleFilter(const Filter&);
    using Matrix = vector<vector<double>>;
    


  public:
    // Pure virtual destructor - Still needs definition!
    virtual ~SimpleFilter () = 0;


    // Public Interface - every derived class must implement
    //                  - or be abstract itself
    virtual void apply (Image&) const = 0;
};

#endif
