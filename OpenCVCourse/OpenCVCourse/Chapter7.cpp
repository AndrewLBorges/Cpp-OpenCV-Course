#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>

/// <summary>
/// Shapes
/// </summary>

//cv::Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;
//
//void getContours(cv::Mat, cv::Mat);
//
//void main()
//{
//	std::string path = "Resources/shapes.png";
//	cv::Mat img = cv::imread(path);
//
//	// Preprocessing
//	cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
//	cv::GaussianBlur(imgGray, imgBlur, cv::Size(3, 3), 3, 0);
//	cv::Canny(imgBlur, imgCanny, 25, 75);
//	cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
//	cv::dilate(imgCanny, imgDil, kernel);
//
//	getContours(imgDil, img);
//
//	cv::imshow("Image", img);
//	//cv::imshow("Image Gray", imgGray);
//	//cv::imshow("Image Blur", imgBlur);
//	//cv::imshow("Image Canny", imgCanny);
//	//cv::imshow("Image Dilated", imgDil);
//	cv::waitKey(0);
//}

//void getContours(cv::Mat imgDil, cv::Mat img)
//{
//	std::vector<std::vector<cv::Point>> contours;
//	std::vector<cv::Vec4i> hierarchy;
//
//	cv::findContours(imgDil, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
//	//cv::drawContours(img, contours, -1, cv::Scalar(255, 0, 255), 2);
//
//	std::vector<std::vector<cv::Point>> conPoly(contours.size());
//	std::vector<cv::Rect> boundRect(contours.size());
//	std::string objectType;
//
//	for (int i = 0; i < contours.size(); i++)
//	{
//		double area = cv::contourArea(contours[i]);
//		//std::cout << area << std::endl;
//
//		if (area > 1000)
//		{
//			double peri = cv::arcLength(contours[i], true);
//			cv::approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
//			cv::drawContours(img, conPoly, i, cv::Scalar(255, 0, 255), 2);
//			//std::cout << conPoly[i].size() << std::endl;
//			boundRect[i] = cv::boundingRect(conPoly[i]);
//			cv::rectangle(img, boundRect[i].tl(), boundRect[i].br(), cv::Scalar(0, 255, 0), 5);
//
//			int objCorner = (int)conPoly[i].size();
//
//			if (objCorner == 3)
//				objectType = "Triangle";
//			if (objCorner == 4) {
//				float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
//
//				if (aspRatio > 0.95 && aspRatio < 1.05)
//					objectType = "Square";
//				else
//					objectType = "Rectangle";
//
//			}
//			if (objCorner > 4)
//				objectType = "Circle";
//
//			cv::putText(img, objectType, { boundRect[i].x, boundRect[i].y - 5 }, cv::FONT_HERSHEY_PLAIN, 1, cv::Scalar(0, 69, 255), 1.8);
//		}
//	}
//}