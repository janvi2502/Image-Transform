#include "image.h"

int main() {
	Image image = readImage("jasper.bmp");

	for (Pixel& pixel : image.pixels) {
		pixel = toBandW(p);
	}

	writeImage("output.bmp", image);

	return 0;
}