//
//  MinusAccountWithdraw.cpp
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014�� Bross. All rights reserved.
//

#include "MinusAccountWithdraw.h"

MinusAccountWithdraw::MinusAccountWithdraw(char credit) {
	// TODO Auto-generated constructor stub
	switch (credit)
	{
	case 'A': case 'a':
		limitedMoney = 10000000; // 1000
		break;
	case 'B': case 'b':
		limitedMoney = 5000000; // 500
		break;
	case 'C': case 'c':
		limitedMoney = 1000000; // 100
		break;
	default:
		break;
	}

}
int MinusAccountWithdraw::withdraw(int balance, int money) {
	// TODO Auto-generated method stub
	if ((balance + limitedMoney) >= money)
	{
		limitedMoney -= money;
		balance = 0;
	}
	else
	{
		printf("�ſ� �ѵ����� �ʰ��߽��ϴ�.\n");
		return balance;
	}

	display();
	return balance;
}
int MinusAccountWithdraw::getLimitedMoney(){ return limitedMoney; }
void MinusAccountWithdraw::display()
{
	printf("�ܿ� �ѵ��� : %d ", limitedMoney);
}