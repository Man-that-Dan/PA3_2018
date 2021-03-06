/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#ifndef FILTER_H
#define FILTER_H

#include <string>
#include <algorithm>
#include "../image/Image.h"

using namespace std;

class Filter {
  protected:
    // Data - Shows that abstract classes can still contain data
    string name;

    // Derived classes need these visible
    Filter();
    Filter(string);
    Filter(const Filter&);

  public:
    // Pure virtual destructor - Still needs definition!
    virtual ~Filter () = 0;

    // Static helpers - should be a template
    static int clamp (int lo, int hi, int x);
    static double clamp (double lo, double hi, double x);
    //Getter for filter's name, implemented mainly for menu class
    string Name();
    // Public Interface - every derived class must implement
    //                  - or be abstract itself
    virtual void apply (Image&) const = 0;
};

#endif
