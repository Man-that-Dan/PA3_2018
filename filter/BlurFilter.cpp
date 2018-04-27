/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
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

//blur filter matrix
Matrix BlurFilter::K3 =
{{ 0.0625 ,0.125, 0.0625},
 {0.125, 0.25,0.125},
 { 0.0625,0.125, 0.0625}};

//uses parent class function to apply blur filter to img
void BlurFilter::apply (Image& img) const{
	KernelFilter::apply(img, this->K3);
}
