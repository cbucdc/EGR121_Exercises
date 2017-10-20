// Inspired by exercise Set 19.docx
/*
A researcher has been given a grayscale image as a 2D array of floating point numbers.

In a grayscale image each pixel value represents the brightness of the pixel.

The image is encoded as a C++ array here:
```
double image[8][8] = {{0.7, 0.8, 1.0, 0.5, 0.5, 0.0, 1.0, 0.5},
	{0.7, 0.5, 1.0, 0.5, 0.6, 1.0, 0.8, 0.6},
	{0.5, 0.1, 1.0, 0.1, 0.1, 1.0, 0.3, 0.7},
	{0.2, 0.0, 1.0, 0.0, 0.7, 1.0, 0.0, 0.4},
	{0.2, 1.0, 0.0, 0.2, 1.0, 0.2, 0.2, 0.0},
	{0.6, 1.0, 0.1, 0.9, 0.4, 0.6, 1.0, 0.3},
	{0.9, 1.0, 1.0, 1.0, 1.0, 1.0, 0.2, 1.0},
	{0.9, 0.0, 1.0, 0.1, 0.3, 0.3, 0.6, 0.7}
};
```
This researcher wishes to reduce this data to a simpler measurement, such as the average value of the pixels.

The Problem:
Write a program that takes this array and print the average pixel brightness of this 2d grayscale image.

Print out that value with two decimal places of precision.

It's a bit distorted, but have fun finding out what's in the image :)

*/
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main() {
	double image[8][8] = {{0.7, 0.8, 1.0, 0.5, 0.5, 0.0, 1.0, 0.5},
		{0.7, 0.5, 1.0, 0.5, 0.6, 1.0, 0.8, 0.6},
		{0.5, 0.1, 1.0, 0.1, 0.1, 1.0, 0.3, 0.7},
		{0.2, 0.0, 1.0, 0.0, 0.7, 1.0, 0.0, 0.4},
		{0.2, 1.0, 0.0, 0.2, 1.0, 0.2, 0.2, 0.0},
		{0.6, 1.0, 0.1, 0.9, 0.4, 0.6, 1.0, 0.3},
		{0.9, 1.0, 1.0, 1.0, 1.0, 1.0, 0.2, 1.0},
		{0.9, 0.0, 1.0, 0.1, 0.3, 0.3, 0.6, 0.7}
	};
	double sum = 0;
	cout << setprecision(2) << fixed;
	for (int row = 0; row < 8; ++row)
	{
		for (int col = 0; col < 8; ++col)
		{
			// cout << image[row][col] << " ";
			sum += image[row][col];
		}
		// cout << endl;
	}
	cout << sum / (8 * 8) << endl;


	return 0;

}
