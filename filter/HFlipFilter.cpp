/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/
#include "HFlipFilter.h"


HFlipFilter::HFlipFilter() :
  SimpleFilter("") {}

HFlipFilter::HFlipFilter(string name) :
  SimpleFilter(name) {}

HFlipFilter::HFlipFilter(const Filter& f) :
  SimpleFilter(f)  {}

HFlipFilter::~HFlipFilter() {}


// Flips image horizontally
void HFlipFilter::apply (Image& img) const{

}
