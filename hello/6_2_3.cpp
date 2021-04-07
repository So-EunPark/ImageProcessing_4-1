// p.297
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

//int main() {
//	Mat image = imread("", IMREAD_GRAYSCALE);
//	CV_Assert(!image.empty);
//
//	Mat dst1 = image + 100;
//	Mat dst2 = image - 100;
//	Mat dst3 = 255 - image;
//
//	Mat dst4(image.size(), image.type());
//	Mat dst4(image.size(), image.type());
//	for (int i = 0; i < image.rows; i++) {
//		for (int j = 0; j < image.cols; j++) {
//
//			dst4.at<uchar>(i, j) = image.at<uchar>(i, j) + 100;
//		}
//	}
//
//}