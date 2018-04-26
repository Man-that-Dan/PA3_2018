/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

*/
#include "BlurFilter.h"


BlurFilter::BlurFilter() :
  KernelFilter("") {}

BlurFilter::BlurFilter(string name) :
  KernelFilter(name) {}

BlurFilter::BlurFilter(const Filter& f) :
  KernelFilter(f)  {}

BlurFilter::~BlurFilter() {}

using Matrix = vector<vector<double>>;

Matrix BlurFilter::K3 =
{{ 0.0625 ,0.125, 0.0625},
 {0.125, 0.25,0.125},
 { 0.0625,0.125, 0.0625}};


void BlurFilter::apply (Image& img) const{
	KernelFilter::apply(img, this->K3);
}
