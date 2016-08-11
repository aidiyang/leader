/*******************************Copyright (c)***************************
**
** Porject name:	leader
** Created by:	zhuzheng<happyzhull@163.com>
** Created date:	2016/07/23
** Modified by:
** Modified date:
** Descriptions:
**
***********************************************************************/
#pragma once
#include "leader_type.h"
#include "leader_misc.h"

#include "os/thread.h"
#include "os/msgque.h"

#include "drivers/core.h"


using namespace os;

namespace app {

class calibration : public thread
{
public:
	calibration(void);
	~calibration(void);

public:
	virtual void run(void *parg);
};

}
/***********************************************************************
** End of file
***********************************************************************/
