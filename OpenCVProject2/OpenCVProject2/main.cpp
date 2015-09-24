#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;


int blv, buv;

int main() {
	cin >> blv;
	cin >> buv;
	Mat image;
	Mat image2;
//	image.copyTo(image2);
	int valueR = 0;
	int valueG = 0;
	int valueB = 0;
	image = imread("C:/Users/Christian/Desktop/testThresh.png", CV_LOAD_IMAGE_COLOR);
	if (image.data && !image.empty()){
		int countR = 0, countG = 0, countB = 0;
		for (size_t y = 0; y < image.rows; ++y){
			for (size_t x = 0; x < image.cols; ++x){
				countB = image.at<Vec3b>(y, x)[0];
				cout << "countB: " << countB;
				if (countB >= buv){
					image.at<Vec3b>(y, x)[0] = 255;
				}
				else if (countB < buv && countB > blv){
					image.at<Vec3b>(y, x)[0] = 127;
				}
				else{
					image.at<Vec3b>(y, x)[0] = 0;
				}
				countG = image.at<Vec3b>(y, x)[1];
//				cout << "countG: " << countG;
				countR = image.at<Vec3b>(y, x)[2];
//				cout << "countR: " << countR << endl;
			}
		}
		int nbrPixels = image.rows * image.cols;
		cout << "Average intensity of RGB values: " << countR / nbrPixels
			<< "," << countG / nbrPixels << "," << countB / nbrPixels << endl;
		imshow("old image", image);
//		imshow("New Image", image2);
			
		
		
		

		
	}
	waitKey(0);
	return 0;
}// Replace FLAG with CV_LOAD_IMAGE_COLOR or CV_LOAD_IMAGE_GRAYSCALE.