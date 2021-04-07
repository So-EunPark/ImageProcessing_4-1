// p.310 히스토그램 그래프 그리기
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

//void calc_histo(const Mat& image, Mat& hist, int bins, int range_max = 256)
//{
//	int histSize[] = { bins };
//	float range[] = { 0, (float)range_max };
//	int channels[] = { 0 };
//	const float* ranges[] = { range };
//
//	calcHist(&image, 1, channels, Mat(), hist, 1, histSize, ranges);
//}
//
//void draw_histo(Mat hist, Mat& hist_img, Size size = Size(256, 200))
//{
//	hist_img = Mat(size, CV_8U, Scalar(255));
//	float bin = (float)hist_img.cols / hist.rows;
//	normalize(hist, hist, 0, hist_img.rows, NORM_MINMAX);
//
//	for (int i = 0; i < hist.rows; i++) {
//		float start_x = i * bin;
//		float end_x = (i + 1) * bin;
//		Point2f pt1(start_x, 0);
//		Point2f pt2(end_x, hist.at<float>(i));
//
//		if (pt2.y > 0)
//			rectangle(hist_img, pt1, pt2, Scalar(0), -1);
//	}
//	flip(hist_img, hist_img, 0);
//}
//
//int main() {
//	Mat image = imread("D:\\4-1학기\\영상처리_한창호\\images/pixel_test.jpg", IMREAD_GRAYSCALE);
//	CV_Assert(!image.empty());
//
//	Mat hist, hist_img;
//	calc_histo(image, hist, 256);
//	draw_histo(hist, hist_img);
//
//	imshow("image", image);
//	imshow("hist_img", hist_img);
//	waitKey();
//	return 0;
//}