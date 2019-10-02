#ifndef __PELION_INTERFACE_H__
#define __PELION_INTERFACE_H__
#include "mbed.h"




class CPelionInterface
{
	CPelionInterface(const CPelionInterface);
	CPelionInterface& operator=(const CPelionInterface);
public:
	CPelionInterface(void);
	virtual ~CPelionInterface(void);
};



#endif// __PELION_INTERFACE_H__