// FaceRecognition_ByOpenCV.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
struct Node;

int main()

{
	/*printf("hello,world");
	getchar();*/
	short int sgs = 56;
	cout << "hello,world!  \n";
	cout << "what's the weather ?\n";
	float sun = static_cast<float>(0.0);
	/*cout.setf(ios::showpoint | ios::fixed);
	cout.precision(14);*/
	cout << "\n pi as float (short int)" << sgs;
	cout << "\n weather (float)" << sun;

	double x, sqrootX;
	x = 5.2;

	sqrootX = sqrt(x);
	cout << "\n Square root of" << x << "is" << sqrootX << "\n\\";
	cout << "\nMay be a another boring day ;";
	getchar();
    return 0;

}


