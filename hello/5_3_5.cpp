//5주차 238
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

//int main() {
//	Mat image = imread("D:\\4-1학기\\영상처리_한창호\\images/bit_test.jpg", IMREAD_COLOR);
//	Mat logo = imread("D:\\4-1학기\\영상처리_한창호\\images/logo.jpg", IMREAD_COLOR);
//	Mat logo_th, masks[5], background, foreground, dst;
//	CV_Assert(image.data && logo.data);
//
//	threshold(logo, logo_th, 70, 255, THRESH_BINARY);
//	split(logo_th, masks);
//
//	bitwise_or(masks[0], masks[1], masks[3]);
//	bitwise_or(masks[2], masks[3], masks[3]);
//	bitwise_not(masks[3], masks[4]);
//
//	Point center1 = image.size() / 2;
//	Point center2 = logo.size() / 2;
//	Point start = center1 - center2;
//	Rect roi(start, logo.size());
//
//	//행렬 논리곱과 마스킹을 이용한 관심영역의 복사
//	bitwise_and(logo, logo, foreground, masks[3]);
//	bitwise_and(image(roi), image(roi), background, masks[4]);
//
//	add(background, foreground, dst);
//	dst.copyTo(image(roi));
//
//	imshow("background", background);
//	imshow("foreground", foreground);
//	imshow("dst", dst);
//	imshow("image", image);
//	waitKey();
//	return 0;
//
//}