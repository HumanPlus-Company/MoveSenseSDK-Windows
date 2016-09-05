#pragma once

#include "CameraMode.h"
#include "MoveSenseErrorCode.h"
namespace movesense{

class _declspec(dllexport) MoveSenseCamera
{
public:
	MoveSenseCamera(movesense::CameraMode mode = CAM_STEREO_752X480_LR_30FPS);
	~MoveSenseCamera(void);

	//打开相机，启动采集
	MoveSenseErrorCode OpenCamera();

	//关闭相机
	void CloseCamera();
	
	//获取一帧图像： 1 -- 正常获取， 0 -- 获取失败，可跳过当前帧， -1 超时，超时的时间为形参ms，单位为毫秒
	int GetImageData(unsigned char * &data, int &len, unsigned long ms = 0xFFFFFFF);

	//室外去天空噪点算法开关
	void setSkyFilter(bool onoff);
	//设置曝光和增益 0-255
	void SetGainValue(int value);

	void SetExposureValue(int value);

	void SetAutoExposure(bool value);
	void SetAutoGain(bool value);
	void SetDesireBin(int value);
	void SetSM_P1(unsigned int value);

	void SetSM_P2(unsigned int value);

	void SetSM_P3(unsigned int value);

	void SetSM_HoleFill(bool onoff);

	void SetSM_LRCheck(bool onoff);

	void SetSM_Subpixel(bool onoff);

	void SetSM_MedianFilter(bool onoff);

	void SetHDR(bool onoff);

	void SetUndistort(bool onoff);

	void SetCameraMode(CameraMode cameraMode);
	CameraMode GetCameraMode();

};
}

