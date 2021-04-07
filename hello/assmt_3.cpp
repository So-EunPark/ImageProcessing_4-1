//과제 3
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

//int main() {
//	Mat logo = imread("D:\\4-1학기\\영상처리_한창호\\images/도깨비1.png", IMREAD_COLOR);
//	Mat sea = imread("D:\\4-1학기\\영상처리_한창호\\images/바다.jpg", IMREAD_COLOR);
//	Mat character = imread("D:\\4-1학기\\영상처리_한창호\\images/배우.png", IMREAD_COLOR);
//	Mat logo_th, character_th, masks[5], masks2[5], background, background2, foreground, foreground2, dst, dst2;
//	CV_Assert(logo.data && sea.data && character.data);
//
//	//로고 이진화
//	threshold(logo, logo_th, 30, 255, THRESH_BINARY);
//	split(logo_th, masks);
//	
//	//로고 포인트
//	Point p1 = sea.size() / 10;
//	Point p2 = logo.size() / 10;
//	Point logo_p = p1 - p2;
//	Rect roi(logo_p, logo.size());
//
//	//로고 반전
//	bitwise_not(masks[0], masks[3]);
//
//	bitwise_and(logo, logo, foreground, masks[3]);
//	bitwise_and(sea(roi), sea(roi), background, masks[3]);
//
//	add(background, foreground, dst);
//	dst.copyTo(sea(roi));
//
//	//캐릭터
//	threshold(character, character_th, 200, 255, THRESH_BINARY);
//	split(character_th, masks2);
//
//	bitwise_or(masks2[0], masks2[1], masks2[3]);
//	bitwise_or(masks2[2], masks2[3], masks2[3]);
//	bitwise_not(masks2[0], masks2[3]);
//
//	//캐릭터 포인트
//	Point p3 = sea.size();
//	Point p4 = character.size();
//	Point char_p = p3 - p4;
//	Rect roi2(char_p, character.size());
//
//	//캐릭터
//	bitwise_and(character, character, foreground2, masks2[3]);
//	bitwise_and(sea(roi2), sea(roi2), background2, masks2[4]);
//
//	add(background2, foreground2, dst2);
//	dst2.copyTo(sea(roi2));
//
//
//	imshow("sea", sea);
//	imshow("logo", logo);
//	imshow("character", character);
//	//imshow("character", character);
//	//imshow("masks2[0])", masks2[0]);
//	//imshow("masks2[3]", masks2[3]);
//	imshow("완성본", sea);
//	waitKey();
//	return 0;
//}