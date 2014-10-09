//
//  Account.cpp
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 26..
//  Copyright (c) 2014년 Bross. All rights reserved.
//

#include "Account.h"


Account::Account(CDate* openningAccountDay, int balance)
{
	this->openningAccountDay = openningAccountDay;
	this->balance = balance;
}
Account::Account(int balance)
{
	this->balance = balance;
	openningAccountDay = new CDate();
}

Account::Account(CDate* openningAccountDay)
{
	this->openningAccountDay = openningAccountDay;
	balance = 0;
}
void Account::deposit(int money)
{
	if (money >= 0)
		balance += money;
}
int Account::getBalance()
{
	return balance;
}
void Account::withdraw(int money)
{
	balance = wh->withdraw(this->balance, money);
}
void Account::display()
{
	printf("현재 잔고는 %d 입니다.\n\n", balance);
}
void Account::setWithdrawBehavior(WithdrawBehavior* wh)
{
	this->wh = wh;
}

