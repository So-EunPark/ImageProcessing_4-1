//p.172
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
/*
void print_matInfo(string name, Mat img) {
	string mat_type;
	if (img.depth() == CV_8U) mat_type = "CV_8U";
	else if (img.depth() == CV_8S) mat_type = "CV_8S";
	else if (img.depth() == CV_16U) mat_type = "CV_16U";
	else if (img.depth() == CV_16S) mat_type = "CV_16S";
	else if (img.depth() == CV_32S) mat_type = "CV_32S";
	else if (img.depth() == CV_32F) mat_type = "CV_32F";
	else if (img.depth() == CV_64F) mat_type = "CV_64F";

	cout << name;
	cout << format(": depth(%d) channels(%d) -> 자료형: ", img.depth(), img.channels());
	cout << mat_type << "C" << img.channels() << endl;
}


int main() {
	string filename1 = "D:\\4-1학기\\영상처리_한창호\\images\\read_16.tif";
	string filename2 = "D:\\4-1학기\\영상처리_한창호\\images\\read_32.tif";
	Mat color2unchanged1 = imread(filename1, IMREAD_UNCHANGED);
	Mat color2unchanged2 = imread(filename2, IMREAD_UNCHANGED);
	CV_Assert(color2unchanged1.data && color2unchanged2.data);

	Rect roi(100, 100, 1, 1);
	cout << "16/32비트 영상 행렬 좌표(100,100) 화소값" << endl;
	cout << "color2unchanged1" << color2unchanged1(roi) << endl;
	cout << "color2unchanged2" << color2unchanged2(roi) << endl << endl;

	print_matInfo("color2unchanged1", color2unchanged1);
	print_matInfo("color2unchanged2", color2unchanged2);
	imshow("color2unchanged1", color2unchanged1);
	imshow("color2unchanged2", color2unchanged2);
	waitKey(0);
	return 0;

}
*/