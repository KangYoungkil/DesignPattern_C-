//
//  SavingAccountWithdraw.h
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014³â Bross. All rights reserved.
//

#ifndef __DesignPattern_Task_1__SavingAccountWithdraw__
#define __DesignPattern_Task_1__SavingAccountWithdraw__
#include "WithdrawBehavior.h"

class SavingAccountWithdraw :public WithdrawBehavior{
private:
	CDate *expirationDate;
public:
	SavingAccountWithdraw(CDate* expirationDate);
	int withdraw(int balance, int money);
};

#endif /* defined(__DesignPattern_Task_1__SavingAccountWithdraw__) */
