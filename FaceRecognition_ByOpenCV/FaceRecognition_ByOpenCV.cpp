#include<iostream>
#include "stdafx.h"


#include<opencv2\opencv.hpp>
#include<opencv2\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace cv;

int main()

{

	Mat picture = imread("2.jpg");

	imshow("测试程序", picture);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstimage;
	erode(picture, dstimage, element);
	imshow("腐蚀操作", dstimage);
	/***这是一个github同步测试**/

	waitKey(0);

}