/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/
#include "Filter.h"

Filter::Filter() :
  name("") {}

Filter::Filter(string name) :
  name(name) {}

Filter::Filter(const Filter& f) :
  name(f.name)  {}

Filter::~Filter() {}

int Filter::clamp (int lo, int hi, int x) {
  return std::max(lo, std::min(x, hi));
}

double Filter::clamp (double lo, double hi, double x) {
  return std::max(lo, std::min(x, hi));
}

string Filter::Name(){
  return this->name;
};
