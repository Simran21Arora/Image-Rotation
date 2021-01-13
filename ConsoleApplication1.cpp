#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{
	string path;
	cout << "enter the path or name of the image : ";
	getline(cin, path);
	Mat img = imread(path);

	if (img.empty())
	{
		cout << "error!!";
		return 0;
	}
	double angle;
	cout << "Enter angle to rotate image : ";
	cin >> angle;
	Point2f pt(img.cols/2.,img.rows/2.);

	namedWindow("Original_image");
	namedWindow("rotated_image");
	imshow("Original_image", img);

	Mat rot;
	Mat rot_img = getRotationMatrix2D(pt,angle,1.0);

	Rect2f bbox = RotatedRect(Point2f(), img.size(), angle).boundingRect2f();
	rot_img.at<double>(0, 2) += bbox.width / 2 - img.cols / 2;
	rot_img.at<double>(1, 2) += bbox.height / 2 - img.rows / 2;
	warpAffine(img, rot, rot_img, bbox.size());

	imshow("rotated_image",rot);

	waitKey(0);
	
	destroyWindow("Original_image");
	destroyWindow("rotated_image");
}