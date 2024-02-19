#include <vector>

struct Pixel {
	unsigned char r, g, b;
};

struct Image {
	int width;
	int height;
	std::vector<Pixel> pixels;
};


Image readImage(const char* file);
void writeImage(const char* file, const Image& img);
Pixel toGrayscale(const Pixel& pixels);

