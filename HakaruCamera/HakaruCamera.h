#ifndef __HAKARU_CAMERA_H__
#define __HAKARU_CAMERA_H__
#include "mbed.h"

using namespace std;

class CHakaruCamera
{
	CHakaruCamera(const CHakaruCamera);
	CHakaruCamera& operator=(const CHakaruCamera);
public:
	CHakaruCamera(RawSerial* pCom=NULL,SDBlockDevice* pSD=NULL );
	virtual ~CHakaruCamera(void);
	
	
};

#endif// __HAKARU_CAMERA_H__

