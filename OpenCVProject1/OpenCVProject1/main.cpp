#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;
int main() {
	Mat image;
	image = imread("C:/Users/Dennis/Desktop/Idea sketches-02.png", CV_LOAD_IMAGE_COLOR);
	if (image.data && !image.empty()){
		imshow("Hello world!", image);
	}
	waitKey(0);
}
