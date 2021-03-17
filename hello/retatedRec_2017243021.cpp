#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
/*
int main() {

	int theta = 0;
	while (1) {
		Mat image(300, 500, CV_8UC3, Scalar(255,255,255)); //캔버스
		Point2f r1(250, 150),r2(100,100), r3(150, 250), pts[4];
		Size2f size1(100, 100), size2(50,150), size3(80, 50);
		RotatedRect rot_rect1(r1, size1, theta += 5), rot_rect2(r2,size2,theta+=5),
					rot_rect3(r3, size3, theta += 5); //회전사각형
	
		Rect bound_rect = rot_rect1.boundingRect()|rot_rect2.boundingRect()| rot_rect3.boundingRect();
		rectangle(image, bound_rect, Scalar(0, 0, 255), 2);

		rot_rect1.points(pts);
			for (int i = 0; i < 4; i++) {
				line(image, pts[i], pts[(i + 1) % 4], Scalar(0), 2);
			}

		rot_rect2.points(pts);
			for (int i = 0; i < 4; i++) {
				line(image, pts[i], pts[(i + 1) % 4], Scalar(0), 2);
			}

		rot_rect3.points(pts);
			for (int i = 0; i < 4; i++) {
				line(image, pts[i], pts[(i + 1) % 4], Scalar(0), 2);
			}


		imshow("과제1 박소은", image);
		waitKey(300);
	}

}
*/