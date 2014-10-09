//  MinusAccountWithdraw.h
//  DesignPattern_Task_1
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014³â Bross. All rights reserved.
#ifndef __DesignPattern_Task_1__MinusAccountWithdraw__
#define __DesignPattern_Task_1__MinusAccountWithdraw__
#include "WithdrawBehavior.h"

class MinusAccountWithdraw :public WithdrawBehavior{
private:
	int limitedMoney;
public:
	MinusAccountWithdraw(char credit);
	int withdraw(int balance, int money);
	int getLimitedMoney();
	void display();
};

#endif /* defined(__DesignPattern_Task_1__MinusAccountWithdraw__) */
