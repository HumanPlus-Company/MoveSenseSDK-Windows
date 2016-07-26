/*
* CameraCtrl.h
*
*  Created on: May 20, 2016
*      Author: liuwei
*/

#ifndef SRC_CAMERACTRL_H_
#define SRC_CAMERACTRL_H_



namespace movesense {
struct MsgPkg{
	unsigned char type;
	unsigned char len;
	unsigned char *data;
};

class _declspec(dllexport) CameraCtrl {
public:
	CameraCtrl();
	virtual ~CameraCtrl();

	bool Open();
	void Close();

	void SetStereoCamParas(float p[36]);
	//void SetStereoCamParasFromDir(std::string dir);
	void GetParas(MsgPkg &p);
	void RecvPkg(MsgPkg &p);
	bool m_opened;
};

}

#endif /* SRC_CAMERACTRL_H_ */
