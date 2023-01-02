//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>

/// <summary>
/// Warp Images
/// </summary>

//const float W = 250, H = 350;
//cv::Mat matrix, imgWarpped;
//
//void main()
//{
//	std::string path = "Resources/cards.jpg";
//	cv::Mat img = cv::imread(path);
//
//	cv::Point2f src[4] = { {529, 142}, {771, 190}, {405, 395}, {674, 457} };
//	cv::Point2f destination[4] = { {0.0f, 0.0f}, {W, 0.0f}, {0.0f, H}, {W, H} };
//
//	matrix = cv::getPerspectiveTransform(src, destination);
//	cv::warpPerspective(img, imgWarpped, matrix, cv::Point(W, H));
//
//	for (int i = 0; i < 4; i++)
//	{
//		cv::circle(img, src[i], 10, cv::Scalar(0, 0, 255), cv::FILLED);
//	}
//
//	cv::imshow("Image", img);
//	cv::imshow("Image Warped", imgWarpped);
//	cv::waitKey(0);
//}
