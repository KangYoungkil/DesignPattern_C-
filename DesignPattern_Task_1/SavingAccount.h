//
//  SavingAccount.h
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014³â Bross. All rights reserved.
//

#ifndef __DesignPattern_Task_1__SavingAccount__
#define __DesignPattern_Task_1__SavingAccount__
#include "Account.h"
#include "CDate.h"
#include "SavingAccountWithdraw.h"

class SavingAccount :public Account {
private:
	CDate* expirationDate;
public:
	SavingAccount(CDate* openningAccountDay, int balance);
	SavingAccount(int balance);
	SavingAccount(CDate* openningAccountDay);
	void display();

};


#endif /* defined(__DesignPattern_Task_1__SavingAccount__) */
