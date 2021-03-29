//과제2 2017243021 박소은
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


//VideoCapture capture;
//
//int B=-128, G = -128, R = -128;
//
//void B_bar(int value, void*) {
//	B = value;
//}
//void G_bar(int value, void*) {
//	G = value;
//}
//void R_bar(int value, void*) {
//	R = value;
//}
//
//void put_string(Mat& frame, string text, Point pt, int value) {
//	text += to_string(value);
//	Point shade = pt + Point(2, 2);
//	int font = FONT_HERSHEY_SIMPLEX;
//	putText(frame, text, shade, font, 0.7, Scalar(0, 0, 0), 2);
//	putText(frame, text, pt, font, 0.7, Scalar(120, 200, 90), 2);
//
//}
//
//int main() {
//
//	capture.open(0);
//	CV_Assert(capture.isOpened());
//
//	capture.set(CAP_PROP_FRAME_WIDTH, 800);
//	capture.set(CAP_PROP_FRAME_HEIGHT, 1000);
//
//
//	
//	string title = "트랙바 BGR값 변경하기 / 박소은";
//	namedWindow(title);
//	createTrackbar("Blue", title, &B, 127, B_bar);
//	createTrackbar("Green", title, &G, 127, G_bar);
//	createTrackbar("Red", title, &R, 127, R_bar);
//
//	for (;;) {
//		Mat frame;
//		capture >> frame;
//
//		frame += Scalar(B, G, R);
//
//		put_string(frame, "Blue: ", Point(10, 240), B);
//		put_string(frame, "Green: ", Point(10, 270), G);
//		put_string(frame, "Red: ", Point(10, 300), R);
//
//		imshow(title, frame);
//		if (waitKey(30) >= 0) break;
//
//	}
//
//	return 0;
//
//}