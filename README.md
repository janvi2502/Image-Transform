<h1>BMP Image Converter</h1>
This program reads a BMP (Bitmap) image file, converts it to grayscale, and writes the result to another BMP image file.

<h2>How to run on Visual Studio 2022</h2>
1. Clone the repository in your local machine <br>
2. Open the solution file(Image-Transform.sln) <br>
3. Build the solution <br>
4. Run the project <br>
5. The program will generate an output BMP file named output.bmp, which contains the grayscale version of the input image. <br>
<br>
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
