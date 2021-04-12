// p.348  HUE채널을 이용한 객체 검출
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
Range th(50, 100);
Mat hue;

void onThreshold(int value, void* userdata)
{
	Mat result = Mat(hue.size(), CV_8U, Scalar(0));

	for (int i = 0; i < result.rows; i++) {
		for (int j = 0; j < result.cols; j++) {
			bool ck = hue.at<uchar>(i, j) >= th.start && hue.at<uchar>(i, j) < th.end;
			result.at<uchar>(i, j) = (ck) ? 255 : 0;
		}
	}
	imshow("result", result);
}

int main() {
	Mat BGR_img = imread("D:\\4-1학기\\영상처리_한창호\\images\\color_space.jpg", 1);
	CV_Assert(BGR_img.data);

	Mat HSV, hsv[3];
	cvtColor(BGR_img, HSV, COLOR_BGR2HSV);
	split(HSV, hsv);
	hsv[0].copyTo(hue);

	namedWindow("result", WINDOW_AUTOSIZE);
	createTrackbar("HUE_th1", "result", &th.start, 255, onThreshold);
	createTrackbar("HUE_th2", "result", &th.end, 255, onThreshold);

	onThreshold(0,0);
	imshow("BGR_img", BGR_img);
	waitKey(0);
	return 0;
}