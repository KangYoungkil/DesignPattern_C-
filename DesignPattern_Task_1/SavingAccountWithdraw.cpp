//
//  SavingAccountWithdraw.cpp
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014�� Bross. All rights reserved.
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
			printf("�ܾ��� �����մϴ�.\n");
	}
	else
		printf("��� �������� ������ �ʾҽ��ϴ�.\n");
	return balance;
}