//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>

/// <summary>
/// /////////////////Importing Images
/// </summary>

//cv::Mat imgOriginal, imgGray, imgBlur, imgCanny, imgDil, imgErode, imgThre, imgWarp, imgCrop;
//std::vector<cv::Point> initialPoints, docPoints;
//float w = 420, h = 596;
//
//cv::Mat preProcess(cv::Mat);
//std::vector<cv::Point> getContours(cv::Mat);
//void drawPoints(std::vector<cv::Point>, cv::Scalar);
//std::vector<cv::Point> reorder(std::vector<cv::Point>);
//cv::Mat getWarp(cv::Mat, std::vector<cv::Point>, double, double);
//
//void main()
//{
//	std::string path = "Resources/paper.jpg";
//	imgOriginal = cv::imread(path);
//	//cv::resize(imgOriginal, imgOriginal, cv::Size(), 0.5, 0.5);
//
//	// Preprocessing
//	imgThre = preProcess(imgOriginal);
//
//	// Get Contours - Biggest
//	initialPoints = getContours(imgThre);
//	docPoints = reorder(initialPoints);
//
//	// Warp
//	imgWarp = getWarp(imgOriginal, docPoints, w, h);
//
//	//Crop
//	int cropVal = 5;
//	cv::Rect roi(cropVal, cropVal, w - (cropVal * 2), h - (cropVal * 2));
//	imgCrop = imgWarp(roi);
//
//	drawPoints(docPoints, cv::Scalar(0, 255, 0));
//
//	cv::imshow("Image", imgOriginal);
//	cv::imshow("Dilated Image", imgThre);
//	cv::imshow("Image Warp", imgWarp);
//	cv::imshow("Image Cropped", imgCrop);
//	cv::waitKey(0);
//}
//
//cv::Mat preProcess(cv::Mat img)
//{
//	cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
//	cv::GaussianBlur(imgGray, imgBlur, cv::Size(3, 3), 3, 0);
//	cv::Canny(imgBlur, imgCanny, 25, 75);
//	
//	cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
//	cv::dilate(imgCanny, imgDil, kernel);
//	//cv::erode(imgDil, imgErode, kernel);
//	return imgDil;
//}
//
//std::vector<cv::Point> getContours(cv::Mat imgInput)
//{
//	std::vector<std::vector<cv::Point>> contours;
//	std::vector<cv::Vec4i> hierarchy;
//
//	cv::findContours(imgInput, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
//
//	std::vector<std::vector<cv::Point>> conPoly(contours.size());
//
//	std::vector<cv::Point> biggest;
//	int maxArea = 0;
//
//	for (int i = 0; i < contours.size(); i++)
//	{
//		double area = cv::contourArea(contours[i]);
//
//		if (area > 1000)
//		{
//			double peri = cv::arcLength(contours[i], true);
//			cv::approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
//
//			if (area > maxArea && conPoly[i].size() == 4)
//			{
//				//cv::drawContours(imgOriginal, conPoly, i, cv::Scalar(255, 0, 255), 5);
//				biggest = { conPoly[i][0], conPoly[i][1], conPoly[i][2], conPoly[i][3] };
//				maxArea = area;
//			}
//		}
//	}
//
//	return biggest;
//}
//
//void drawPoints(std::vector<cv::Point> points, cv::Scalar color)
//{
//	for (int i = 0; i < points.size(); i++)
//	{
//		cv::circle(imgOriginal, points[i], 10, color, cv::FILLED);
//		cv::putText(imgOriginal, std::to_string(i), points[i], cv::FONT_HERSHEY_PLAIN, 3, color, 3);
//	}
//}
//
//std::vector<cv::Point> reorder(std::vector<cv::Point> points)
//{
//	std::vector<cv::Point> newPoints;
//	std::vector<int> sumPoints, subPoints;
//	int maxSum, minSum, maxSub, minSub;
//
//	for (int i = 0; i < points.size(); i++)
//	{
//		sumPoints.push_back(points[i].x + points[i].y);
//		subPoints.push_back(points[i].x - points[i].y);
//	}
//
//	minSum = std::min_element(sumPoints.begin(), sumPoints.end()) - sumPoints.begin();
//	maxSum = std::max_element(sumPoints.begin(), sumPoints.end()) - sumPoints.begin();
//	minSub = std::min_element(subPoints.begin(), subPoints.end()) - subPoints.begin();
//	maxSub = std::max_element(subPoints.begin(), subPoints.end()) - subPoints.begin();
//
//	newPoints.push_back(points[minSum]);
//	newPoints.push_back(points[maxSub]);
//	newPoints.push_back(points[minSub]);
//	newPoints.push_back(points[maxSum]);
//
//	return newPoints;
//}
//
//cv::Mat getWarp(cv::Mat img, std::vector<cv::Point> points, double width, double heigth)
//{
//	cv::Point2f src[4] = { points[0], points[1], points[2], points[3] };
//	cv::Point2f destination[4] = { {0.0f, 0.0f}, {w, 0.0f}, {0.0f, h}, {w, h} };
//
//	cv::Mat matrix = cv::getPerspectiveTransform(src, destination);
//	cv::warpPerspective(img, imgWarp, matrix, cv::Point(w, h));
//
//	return imgWarp;
//}