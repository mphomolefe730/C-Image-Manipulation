#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string imageName = "01.grayImage.ppm";
	string ppmVersion = "P3";
	int imageWeight = 255;
	int imageHeight = 255;
	int colourRange = 255;

	ofstream image;
	image.open(imageName);
	
	if(image.is_open()){
		image << ppmVersion << endl;
		image << imageWeight << " " << imageHeight << endl;
		image << colourRange << endl;

		for(int xAxis = 0; xAxis < imageHeight; xAxis++){
			for(int yAxis = 0; yAxis< imageWeight; yAxis++){
				//Red Green Blue
				image << yAxis << " " << yAxis << " " << yAxis<< endl;
			}
		}
	}
	
	image.close();
	return 0;
}
