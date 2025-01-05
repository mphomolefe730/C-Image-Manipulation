#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main(){
	ifstream image;
	ofstream newImage;
	string imageType = "", imageWidth = "", imageHeight = "" , imageRGB = "";
	
	image.open("03.apollo.ppm");
	newImage.open("03.exposureImage.ppm");

	//copy image header information to new image
	image >> imageType;
	image >> imageWidth;
	image >> imageHeight;
	image >> imageRGB;

	newImage << imageType << endl;
	newImage << imageWidth << " " << imageHeight << endl;
	newImage << imageRGB << endl;

	int red = 0, green = 0, blue = 0;
	double exposureValue = 2.5;
	string stringRed = "", stringGreen = "", stringBlue = "";

	while(!image.eof()){
		//charactor gotten her is a string, we need to convert it back into interger
		image >> stringRed;
		image >> stringGreen;
		image >> stringBlue;

		red = stoi(stringRed) * exposureValue;
		green = stoi(stringGreen) * exposureValue;
		blue = stoi(stringBlue) * exposureValue;
		
		newImage << red << " " << green << " "<< blue << endl;
	}
	return 0;
}
