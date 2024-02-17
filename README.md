<h1>BMP Image Converter</h1>
This program reads a BMP (Bitmap) image file, converts it to grayscale, and writes the result to another BMP image file.

<h2>How to run on Visual Studio 2022</h2>
1. Clone the repository to your local machine <br>
2. Open Visual Studio 2022 and navigate to the cloned repository folder. Open the Image-Transform.sln solution file. <br>
3. Build and run the project using Visual Studio. Press Ctrl + F5 to build and run without debugging. <br>
4. After running the program, check the output.bmp file generated in the project directory. This file contains the grayscale version of the input BMP image. <br>
<br>
<h2>Code Overview</h2>
The program consists of several functions: <br>
<ul>
<li>readImage: Reads the input BMP image file and returns an Image object containing the image data. </li>
<li>writeImage: Writes the image data contained in an Image object to a BMP file. </li> 
<li>toGrayscale: Converts a given pixel to grayscale.</li>
</ul>
The main function orchestrates the overall process: <br>
<ul>
<li>It reads the input BMP image file into an Image object. </li>
<li>Iterates through each pixel in the image and converts it to grayscale.</li>
<li>Writes the resulting image data to an output BMP file.</li>
</ul>
<br>
<h2>Contribution</h2>
<ul>
<li>Contributions to the program, such as enhancements, bug fixes, or additional features, are welcome. Feel free to fork the repository, make changes, and submit a pull request.</li></ul>
