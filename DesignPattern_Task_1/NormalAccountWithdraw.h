//
//  NormalAccountWithdraw.h
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014³â Bross. All rights reserved.
//

#ifndef __DesignPattern_Task_1__NormalAccountWithdraw__
#define __DesignPattern_Task_1__NormalAccountWithdraw__

#include "WithdrawBehavior.h"

class NormalAccountWithdraw :public WithdrawBehavior{
public:
	int withdraw(int balance, int money);
};


#endif /* defined(__DesignPattern_Task_1__NormalAccountWithdraw__) */
