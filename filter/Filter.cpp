/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#include "Filter.h"

Filter::Filter() :
  name("") {}

Filter::Filter(string name) :
  name(name) {}

Filter::Filter(const Filter& f) :
  name(f.name)  {}

Filter::~Filter() {}

//Clamp function contains a value to within a low and high
int Filter::clamp (int lo, int hi, int x) {
  return std::max(lo, std::min(x, hi));
}

double Filter::clamp (double lo, double hi, double x) {
  return std::max(lo, std::min(x, hi));
}

//Getter for filter's name string, implemented mainly for menu class
string Filter::Name(){
  return this->name;
};
