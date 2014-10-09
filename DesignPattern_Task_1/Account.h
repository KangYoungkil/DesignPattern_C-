//
//  Account.h
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 26..
//  Copyright (c) 2014≥‚ Bross. All rights reserved.
//

#ifndef __DesignPattern_Task_1__Account__
#define __DesignPattern_Task_1__Account__
#include "CDate.h"
#include "WithdrawBehavior.h"

class Account {
public:
	CDate* openningAccountDay; // ∞Ë¡¬∞≥º≥¿œ
	int balance; 	// ¿‹∞Ì
	WithdrawBehavior* wh;

public:
	Account(CDate* openningAccountDay, int balance);
	Account(int balance);
	Account(CDate* openningAccountDay);
	void deposit(int money);
	int getBalance();
	void withdraw(int money);
	virtual void display();
	void setWithdrawBehavior(WithdrawBehavior* wh);
};


#endif /* defined(__DesignPattern_Task_1__Account__) */
