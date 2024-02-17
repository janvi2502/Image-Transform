#include "image.h"
#include <fstream>

Image readImage(const char* file) {
	std::fstream bmp(file, std::ios::binary);
	char header[54];


	bmp.read(header, 54);

	int width = *(int*)&header[18];
	int height = *(int*)&header[22];

	bmp.seekg(54);

	Image img;
	img.width = width;
	img.height = height;

	img.pixels.resize(width * height);

	bmp.read((char*)img.pixels.data(), img.pixels.size() * sizeof(Pixel));

	return img;
}

void writeImage(const char* file, const Image & img) {
	std::ofstream bmp(file, std::ios::binary);

	char header[54] = { 'B', 'M', 0 };
	*(int*)&header[2] = 54 + img.width * img.height * sizeof(Pixel);
	*(int*)&header[10] = 54;
	*(int*)&header[14] = 40;
	*(int*)&header[18] = img.width;
	*(int*)&header[22] = img.height;
	*(short*)&header[26] = 1;
	*(short*)&header[28] = 24;

	bmp.write(header, 54);
	bmp.write((char*)img.pixels.data(), img.pixels.size() * sizeof(Pixel));
}

Pixel toBandW(const Pixel& p) {
	unsigned char bw = p .r * 0.3 + p.g * 0.59 + p.b * 0.11;
	return { bw, bw, bw };
}
