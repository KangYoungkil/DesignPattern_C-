//
//  NormalAccountWithdraw.h
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014³â Bross. All rights reserved.
//

#ifndef __DesignPattern_Task_1__NormalAccount__
#define __DesignPattern_Task_1__NormalAccount__
#include "Account.h"
#include "NormalAccountWithdraw.h"
class NormalAccount : public Account{
public:
	NormalAccount(CDate* openningAccountDay, int balance);
	NormalAccount(int balance);
	NormalAccount(CDate* openningAccountDay);
};


#endif /* defined(__DesignPattern_Task_1__NormalAccount__) */
