/*
  Daniel Toro
  PA3 - CPSC 1020 2018
  MWF 11:15
  dtoro@g.clemson.edu
*/
#include "SharpenFilter.h"


SharpenFilter::SharpenFilter() :
  KernelFilter("") {}

SharpenFilter::SharpenFilter(string name) :
  KernelFilter(name) {}

SharpenFilter::SharpenFilter(const Filter& f) :
  KernelFilter(f)  {}

SharpenFilter::~SharpenFilter() {}

using Matrix = vector<vector<double>>;

//sharpening matrix
Matrix SharpenFilter::K3 =
{{ 0,-1, 0},
 {-1, 5,-1},
 { 0,-1, 0}};

//apply function uses parent class' apply function with own matrix
void SharpenFilter::apply (Image& img) const{
	KernelFilter::apply(img, this->K3);
}
