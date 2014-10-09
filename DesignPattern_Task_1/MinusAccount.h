//
//  MinusAccount.h
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 26..
//  Copyright (c) 2014³â Bross. All rights reserved.
//

#ifndef __DesignPattern_Task_1__MinusAccount__
#define __DesignPattern_Task_1__MinusAccount__

#include "Account.h"
#include "MinusAccountWithdraw.h"

class MinusAccount :public Account {
private:
	char credit;
public:
	MinusAccount(CDate* openningAccountDay, int balance);

	MinusAccount(int balance);
	MinusAccount(CDate* openningAccountDay);
	void setCredit(char credit);
	void judgeCredit();
	void display();

};

#endif /* defined(__DesignPattern_Task_1__MinusAccount__) */
