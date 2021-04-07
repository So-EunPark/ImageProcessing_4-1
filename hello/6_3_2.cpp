// p.309 히스토그램 계산
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

//void calc_Histo(const Mat& image, Mat& hist, int bins, int range_max = 256)
//{
//	int histSize[] = { bins };
//	float range[] = { 0, (float)range_max };
//	int channels[] = { 0 };
//	const float* ranges[] = { range };
//
//	calcHist(&image, 1, channels, Mat(), hist, 1, histSize, ranges);
//}
//
//int main() {
//	Mat image = imread("D:\\4-1학기\\영상처리_한창호\\images/pixel_test.jpg", IMREAD_GRAYSCALE);
//	CV_Assert(!image.empty());
//
//	Mat hist;
//	calc_Histo(image, hist, 256);
//	cout << hist.t() << endl;
//
//	imshow("image", image);
//	waitKey();
//	return 0;
//}