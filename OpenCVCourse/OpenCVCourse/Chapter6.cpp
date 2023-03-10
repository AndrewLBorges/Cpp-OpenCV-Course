//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>

/// <summary>
/// Color Detection
/// </summary>

//cv::Mat imgHSV, mask;
//int hmin = 0, smin = 0, vmin = 0;
//int hmax = 179, smax = 255, vmax = 255;

//void main()
//{
//	std::string path = "Resources/shapes.png";
//	cv::Mat img = cv::imread(path);
//
//	cv::cvtColor(img, imgHSV, cv::COLOR_BGR2HSV);
//
//	cv::namedWindow("Trackbars", (640, 200));
//	cv::createTrackbar("Hue Min", "Trackbars", &hmin, 179);
//	cv::createTrackbar("Hue Max", "Trackbars", &hmax, 179);
//	cv::createTrackbar("Sat Min", "Trackbars", &smin, 255);
//	cv::createTrackbar("Sat Max", "Trackbars", &smax, 255);
//	cv::createTrackbar("Val Min", "Trackbars", &vmin, 255);
//	cv::createTrackbar("Val Max", "Trackbars", &vmax, 255);
//
//	while (true)
//	{
//		cv::Scalar lower(hmin, smin, vmin);
//		cv::Scalar upper(hmax, smax, vmax);
//		cv::inRange(imgHSV, lower, upper, mask);
//
//		cv::imshow("Image", img);
//		cv::imshow("Image HSV", imgHSV);
//		cv::imshow("Image mask", mask);
//		cv::waitKey(1);
//	}
//
//}
