//
//  WithdrawBehavior.h
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014³â Bross. All rights reserved.
//

#ifndef DesignPattern_Task_1_WithdrawBehavior_h
#define DesignPattern_Task_1_WithdrawBehavior_h
#include "CDate.h"
class WithdrawBehavior{
public:
	virtual int withdraw(int balance, int money) = 0;
};

#endif
