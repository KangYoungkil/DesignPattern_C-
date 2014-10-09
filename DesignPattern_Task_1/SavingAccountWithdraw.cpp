//
//  SavingAccountWithdraw.cpp
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014년 Bross. All rights reserved.
//

#include "SavingAccountWithdraw.h"


SavingAccountWithdraw::SavingAccountWithdraw(CDate* expirationDate)
{
	this->expirationDate = expirationDate;
}
int SavingAccountWithdraw::withdraw(int balance, int money) {
	// TODO Auto-generated method stub

	CDate d;

	if (d.after(*expirationDate))
	{
		if (balance >= money)
			balance -= money;
		else
			printf("잔액이 부족합니다.\n");
	}
	else
		printf("계약 만료일이 지나지 않았습니다.\n");
	return balance;
}