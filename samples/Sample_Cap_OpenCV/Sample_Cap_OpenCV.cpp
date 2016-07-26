#include "MoveSenseCamera.h"
#include "opencv2/opencv.hpp"
#include <iostream>
#include <stdio.h>
void TestCase_752X480_LR()
{
	movesense::CameraMode sel = CAM_STEREO_752X480_LR_30FPS;
	movesense::MoveSenseCamera c(sel);
	if(!(movesense::MS_SUCCESS==c.OpenCamera()))
	{
		std::cout << "Open Camera Failed!" << std::endl;
		return;
	}

	int width  = 752;
	int height = 480;
	int len  = width*height*2;

	unsigned char * img_data  = new unsigned char[len];

	while(1)
	{
		c.GetImageData(img_data ,len);
		if(len>0)
		{
			cv::Mat left(height,width,CV_8UC1),right(height,width,CV_8UC1);
			for(int i = 0 ; i < height; i++)
			{
				memcpy(left.data+width*i,	img_data+(2*i)*width,	width);
				memcpy(right.data+width*i,	img_data+(2*i+1)*width,	width);
			}
			cv::imshow("left",left);
			cv::imshow("right",right);
			char key = cv::waitKey(30);
			if(key == 'q')
			 break;
		}
	}
	c.CloseCamera();
	delete img_data;
}

void TestCase_752X480_LD()
{
	movesense::CameraMode sel = CAM_STEREO_752X480_LD_30FPS;
	movesense::MoveSenseCamera c(sel);
	if(!(movesense::MS_SUCCESS==c.OpenCamera()))
	{
		std::cout << "Open Camera Failed!" << std::endl;
		return;
	}

	int width  = 752;
	int height = 480;
	int len  = width*height*2;

	unsigned char * img_data  = new unsigned char[len];

	while(1)
	{
		c.GetImageData(img_data ,len);
		if(len > 0)
		{
			cv::Mat left(height,width,CV_8UC1),disp(height,width,CV_8UC1);
			for(int i = 0 ; i < height; i++)
			{
				memcpy(left.data+width*i,	img_data+(2*i)*width,width);
				memcpy(disp.data+width*i,img_data+(2*i+1)*width,width);
			}
			cv::imshow("left",left);
			cv::imshow("disp",disp);
			char key = cv::waitKey(10);
			if(key == 'q')
			 break;
		}
	}
	c.CloseCamera();
	delete img_data;
}
void TestCase_752X480_LRD() // only surport usb3.0 now
{
	movesense::CameraMode sel = CAM_STEREO_752X480_LRD_30FPS;
	movesense::MoveSenseCamera c(sel);
	if(!(movesense::MS_SUCCESS==c.OpenCamera()))
	{
		std::cout << "Open Camera Failed!" << std::endl;
		return;
	}

	int width  = 752;
	int height = 480;
	int len  = width*height*3;

	unsigned char * img_data  = new unsigned char[len];

	while(1)
	{
		c.GetImageData(img_data ,len);
		if(len > 0)
		{
			cv::Mat left(height,width,CV_8UC1),right(height,width,CV_8UC1),disp(height,width,CV_8UC1);
			for(int i = 0 ; i < height; i++)
			{
				memcpy(left.data+width*i,	img_data+(3*i+0)*width,width);
				memcpy(right.data+width*i,	img_data+(3*i+1)*width,width);
				memcpy(disp.data+width*i,	img_data+(3*i+2)*width,width);
			}
			cv::imshow("left",left);
			cv::imshow("right",right);
			cv::imshow("disp",disp);
			char key = cv::waitKey(10);
			if(key == 'q')
			 break;
		}
	}
	c.CloseCamera();
	delete img_data;
}

void TestCase_376X240_LR()
{
	movesense::CameraMode sel = CAM_STEREO_376X240_LR_30FPS;
	movesense::MoveSenseCamera c(sel);
	if(!(movesense::MS_SUCCESS==c.OpenCamera()))
	{
		std::cout << "Open Camera Failed!" << std::endl;
		return;
	}

	int width  = 376;
	int height = 240;
	int len  = width*height*2;

	unsigned char * img_data  = new unsigned char[len];

	while(1)
	{
		c.GetImageData(img_data ,len);
		if(len > 0)
		{
			cv::Mat left(height,width,CV_8UC1),right(height,width,CV_8UC1);
			for(int i = 0 ; i < height; i++)
			{
				memcpy(left.data+width*i,	img_data+(2*i)*width,width);
				memcpy(right.data+width*i,img_data+(2*i+1)*width,width);
			}
			cv::imshow("left",left);
			cv::imshow("right",right);
			char key = cv::waitKey(10);
			if(key == 'q')
			 break;
		}
	}
	c.CloseCamera();
	delete img_data;
}

void TestCase_376X240_LD()
{
	movesense::CameraMode	sel = CAM_STEREO_376X240_LD_30FPS;
	movesense::MoveSenseCamera c(sel);
	if(!(movesense::MS_SUCCESS==c.OpenCamera()))
	{
		std::cout << "Open Camera Failed!" << std::endl;
		return;
	}

	int width  = 376;
	int height = 240;
	int len  = width*height*2;

	unsigned char * img_data  = new unsigned char[len];

	while(1)
	{
		c.GetImageData(img_data ,len);
		if(len > 0)
		{
			cv::Mat left(height,width,CV_8UC1),disp(height,width,CV_8UC1);
			for(int i = 0 ; i < height; i++)
			{
				memcpy(left.data+width*i,	img_data+(2*i+0)*width,width);
				memcpy(disp.data+width*i,	img_data+(2*i+1)*width,width);
			}
			cv::imshow("left",left);
			cv::imshow("disp",disp);
			char key = cv::waitKey(10);
			if(key == 'q')
			 break;
		}
	}
	c.CloseCamera();
	delete img_data;
}
void TestCase_376X240_LRD() // only surport usb3.0 now
{
	movesense::CameraMode sel = CAM_STEREO_376X240_LRD_30FPS;
	movesense::MoveSenseCamera c(sel);
	if(!(movesense::MS_SUCCESS==c.OpenCamera()))
	{
		std::cout << "Open Camera Failed!" << std::endl;
		return;
	}

	int width  = 376;
	int height = 240;
	int len  = width*height*3;

	unsigned char * img_data  = new unsigned char[len];

	while(1)
	{
		c.GetImageData(img_data ,len);
		if(len > 0)
		{
			cv::Mat left(height,width,CV_8UC1),right(height,width,CV_8UC1),disp(height,width,CV_8UC1);
			for(int i = 0 ; i < height; i++)
			{
				memcpy(left.data+width*i,	img_data+(3*i+0)*width,width);
				memcpy(right.data+width*i,	img_data+(3*i+1)*width,width);
				memcpy(disp.data+width*i,	img_data+(3*i+2)*width,width);
			}
			cv::imshow("left",left);
			cv::imshow("right",right);
			cv::imshow("disp",disp);
			char key = cv::waitKey(10);
			if(key == 'q')
			 break;
		}
	}
	c.CloseCamera();
	delete img_data;
}

#define TEST_CASE 1  

int main()
{
#if   TEST_CASE == 1
	TestCase_752X480_LR();
#elif TEST_CASE == 2
	TestCase_752X480_LD();
#elif TEST_CASE == 3
	TestCase_752X480_LRD();
#elif TEST_CASE == 4
	TestCase_376X240_LR();
#elif TEST_CASE == 5
	TestCase_376X240_LD();
#elif TEST_CASE == 6
	TestCase_376X240_LRD();
#endif
	return true;
}
