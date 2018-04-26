
#include "GrayscaleFilter.h"


GrayscaleFilter::GrayscaleFilter() :
PixelFilter("") {}

GrayscaleFilter::GrayscaleFilter(string name) :
PixelFilter(name) {}


GrayscaleFilter::GrayscaleFilter(const Filter& f) :
PixelFilter(f)  {}

GrayscaleFilter::~GrayscaleFilter() {}



Pixel GrayscaleFilter::apply_transform(const Pixel& pix) const{
   int color = pix.luminance();
   return Pixel(color, color, color);

};
