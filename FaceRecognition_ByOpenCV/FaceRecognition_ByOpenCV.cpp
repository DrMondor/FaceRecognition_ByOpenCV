// FaceRecognition_ByOpenCV.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include<sstream>
#include<opencv2\opencv.hpp>
#include<opencv2\face.hpp>
using namespace std;
using namespace cv;
struct Node;

#define FILE_OUT "BUT.csv"
void writeCsv();  //制作csv文件  //56

int main()

{
	//writeCsv();
	string filename = string("FILE_OUT");
	ifstream file(filename.c_str(), ifstream::in);



	string line, path, classlabel;
	vector<Mat> images;
	vector<int> labels;
	char separator = ';';

}

void writeCsv() {

	ofstream output;

	output.open(FILE_OUT);
	string surname = "C:\\Users\\TR\\Desktop\\Asian\\AF30";
	
	for (int sign = 0; sign < 12; sign++) {

		
		if (sign <= 9)
		{
			string surname = "C:\\Users\\TR\\Desktop\\Asian\\AF30";
			string s;
			stringstream ss;
			surname += "0";
			ss << sign;
			ss >> s;
			surname += s;
			output << surname << "\n" << endl;
			cout << surname << "\n";
		}
		else
		{
			string surname = "C:\\Users\\TR\\Desktop\\Asian\\AF30";
			string s;
			stringstream ss;
			ss << sign;
			ss >> s;
			surname += s;
			output << surname << "\n" << endl;
			cout << surname << "\n";
		}
		
	}
}


