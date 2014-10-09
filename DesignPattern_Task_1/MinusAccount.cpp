//
//  MinusAccount.cpp
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 26..
//  Copyright (c) 2014년 Bross. All rights reserved.
//

#include "MinusAccount.h"
#include <ctype.h>

MinusAccount::MinusAccount(CDate* openningAccountDay, int balance) :Account(openningAccountDay, balance) {
	judgeCredit();
}

MinusAccount::MinusAccount(int balance) : Account(balance) {
	judgeCredit();
}

MinusAccount::MinusAccount(CDate* openningAccountDay) : Account(openningAccountDay) {
	judgeCredit();
}
void MinusAccount::setCredit(char credit)
{
	switch (credit)
	{
	case 'A': case 'a':
		setWithdrawBehavior(new MinusAccountWithdraw('A'));
		this->credit = 'A';
		break;
	case 'B': case 'b':
		setWithdrawBehavior(new MinusAccountWithdraw('B'));
		this->credit = 'B';
		break;
	case 'C': case 'c':
		setWithdrawBehavior(new MinusAccountWithdraw('C'));
		this->credit = 'C';
		break;
	default:
		break;
	}
}
void MinusAccount::judgeCredit()
{
	if (10000000 <= balance)
		setCredit('A');
	else if (5000000 <= balance&&balance<10000000)
		setCredit('B');
	else
		setCredit('C');
}

void MinusAccount::display()
{
	printf("Minus 통장 ---\n");
	printf("현재 잔고 : %d  신용등급 : %c \n", balance, credit);
	cout << endl;
}