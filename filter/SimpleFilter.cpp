/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#include "SimpleFilter.h"

SimpleFilter::SimpleFilter() :
  Filter("") {}

SimpleFilter::SimpleFilter(string name) :
  Filter(name) {}

SimpleFilter::SimpleFilter(const Filter& f) :
  Filter(f)  {}

SimpleFilter::~SimpleFilter() {}
