//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>

/// <summary>
/// Resize and Crop
/// </summary>

//void main()
//{
//	std::string path = "Resources/test.png";
//	cv::Mat img = cv::imread(path);
//	cv::Mat imgResized, imgCropped;
//
//	std::cout << img.size() << std::endl;
//	cv::resize(img, imgResized, cv::Size(640, 480));
//	cv::resize(img, imgResized, cv::Size(), 0.5, 0.5);
//
//	cv::Rect roi(200, 100, 300, 300);
//	imgCropped = img(roi);
//
//	cv::imshow("Image", img);
//	cv::imshow("Image Resized", imgResized);
//	cv::imshow("Image Cropped", imgCropped);
//
//	cv::waitKey(0);
//}