#include <vector>

using namespace std;

struct Image {
	int width;
	int height;
	vector<Pixel> pixels;
};

struct Pixel {
	unsigned char r, g, b;
};

Image readImage(const char* file);
void writeImage(const char* file, const Image& img);
Pixel toBandW(const Pixel& p);

