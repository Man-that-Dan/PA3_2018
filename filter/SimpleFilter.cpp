/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/
#include "SimpleFilter.h"

SimpleFilter::SimpleFilter() :
  Filter("") {}

SimpleFilter::SimpleFilter(string name) :
  Filter(name) {}

SimpleFilter::SimpleFilter(const Filter& f) :
  Filter(f)  {}

SimpleFilter::~SimpleFilter() {}
