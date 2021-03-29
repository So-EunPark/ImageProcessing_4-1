//5���� 248
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
	Mat image = imread("D:\\4-1�б�\\����ó��_��âȣ\\images/minMax.jpg",IMREAD_GRAYSCALE);
	double minVal, maxVal;
	//image = image+200; //���� ���������� ���� ���� ��.
	minMaxIdx(image, &minVal, &maxVal);

	double ratio = (maxVal - minVal) / 255.0;
	Mat dst = (image - minVal) / ratio;

	cout << "�ּڰ� = " << minVal << endl;
	cout << "�ִ� = " << maxVal << endl;
	imshow("image", image);
	imshow("dst", dst);
	waitKey();
	return 0;
}