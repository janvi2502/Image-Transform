#include "image.h"

int main() {
	Image image = readImage("jasper.bmp");

	for (Pixel& pixel : image.pixels) {
		pixel = toGrayscale(pixel);
	}

	writeImage("output.bmp", image);

	return 0;
}