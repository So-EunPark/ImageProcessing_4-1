//5주차 248
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
	Mat image = imread("D:\\4-1학기\\영상처리_한창호\\images/minMax.jpg",IMREAD_GRAYSCALE);
	double minVal, maxVal;
	//image = image+200; //조금 밝은사진도 적당 밝기로 함.
	minMaxIdx(image, &minVal, &maxVal);

	double ratio = (maxVal - minVal) / 255.0;
	Mat dst = (image - minVal) / ratio;

	cout << "최솟값 = " << minVal << endl;
	cout << "최댓값 = " << maxVal << endl;
	imshow("image", image);
	imshow("dst", dst);
	waitKey();
	return 0;
}