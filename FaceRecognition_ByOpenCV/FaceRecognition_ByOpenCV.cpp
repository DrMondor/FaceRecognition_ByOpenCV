#include<iostream>
#include "stdafx.h"


#include<opencv2\opencv.hpp>
#include<opencv2\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include "../face.hpp"
using namespace cv;
using namespace std;

int main()

{
	string fileName = string("2.jpg");
	ifstream file(fileName.c_str(), ifstream::in);


	/*Mat picture = imread("2.jpg");

	imshow("测试程序", picture);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstimage;
	erode(picture, dstimage, element);
	imshow("腐蚀操作", dstimage);

	waitKey(0);*/

}