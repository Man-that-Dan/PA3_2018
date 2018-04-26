#include <iostream>
#include <string>
#include <algorithm>
#include "image/Pixel.h"
#include "image/Header.h"
#include "image/Image.h"
#include "filter/SharpenFilter.h"
#include "filter/BlurFilter.h"
#include "filter/HFlipFilter.h"
#include "filter/VFlipFilter.h"
#include "filter/BinaryFilter.h"
#include "filter/SepiaFilter.h"
#include "filter/GrayscaleFilter.h"
#include "filter/Menu.h"

using namespace std;


int main(int argc, char const *argv[]) {


  SharpenFilter Sharpenfilt("Sharpen Filter");
  BlurFilter Blurfilt("Blur Filter");
  HFlipFilter Hflipfilt("Horizontal Flip Filter");
  VFlipFilter Vflipfilt("Vertical Flip Filter");
  Pixel col1 (100,100,100);
  Pixel col2 (0, 150, 0);
  BinaryFilter Binaryfilt("Binary Filter", col1, col2);
  SepiaFilter Sepiafilt("Sepia Filter");
  GrayscaleFilter Grayscalefilt("Grayscale Filter");
  vector<Filter*> menuopt;
  menuopt.resize(7);
  menuopt[0] = Sharpenfilt;
  menuopt[1] = Blurfilt;
  menuopt[2] = Hflipfilt;
  menuopt[3] = Vflipfilt;
  menuopt[4] = Binaryfilt;
  menuopt[5] = Sepiafilt;
  menuopt[6] = Grayscalefilt;
  Menu FiltMenu("Filter menu", menuopt);
  FiltMenu.Display();
  FiltMenu.Choose();


  return 0;

}
