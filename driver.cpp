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


using namespace std;


int main(int argc, char const *argv[]) {
//   if (argc != 3) {
//   std::cerr << "USAGE: ./out <in.ppm> <out.ppm>";
//   return 1;
// };



// Open files
std::ifstream input("input.ppm");
std::ofstream output1("Sharpen.ppm");
std::ofstream output2("Blur.ppm");
std::ofstream output3("Hflip.ppm");
std::ofstream output4("Vflip.ppm");
std::ofstream output5("Binary.ppm");
std::ofstream output6("Sepia.ppm");
std::ofstream output7("Grayscale.ppm");



if (!(input)) {
  std::cerr << "Could not open input/output\n";
  return 1;
}
// Image inImg3(input);
// Image inImg1(input);
// Image inImg2(input);
//
// Image inImg4(input);
Image inImg5(input);
// Image inImg6(input);
// Image inImg7(input);
//
SharpenFilter Sharpenfilt;
BlurFilter Blurfilt;
HFlipFilter Hflipfilt;
VFlipFilter Vflipfilt;
Pixel col1 (100,100,100);
Pixel col2 (0, 150, 0);
BinaryFilter Binaryfilt("bob", col1, col2);
SepiaFilter Sepiafilt;
GrayscaleFilter Grayscalefilt;
// Hflipfilt.apply(inImg3);
// Sharpenfilt.apply(inImg1);
// Blurfilt.apply(inImg2);
//
// Vflipfilt.apply(inImg4);
Binaryfilt.apply(inImg5);
// Sepiafilt.apply(inImg6);
// Grayscalefilt.apply(inImg7);
// inImg3.write_to(output3);
// inImg1.write_to(output1);
// inImg2.write_to(output2);
//
// inImg4.write_to(output4);
inImg5.write_to(output5);
// inImg6.write_to(output6);
// inImg7.write_to(output7);

input.close();
output1.close();
output2.close();
output3.close();
output4.close();
output5.close();
output6.close();
output7.close();






return 0;

}
