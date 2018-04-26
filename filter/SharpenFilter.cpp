/*
  Daniel Toro
  lab10
  CPSC 1021
  TR 14:00

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

Matrix SharpenFilter::K3 =
{{ 0,-1, 0},
 {-1, 5,-1},
 { 0,-1, 0}};


void SharpenFilter::apply (Image& img) const{
	KernelFilter::apply(img, this->K3);
}