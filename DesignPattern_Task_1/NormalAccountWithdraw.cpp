//
//  NormalAccountWithdraw.cpp
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014년 Bross. All rights reserved.
//

#include "NormalAccountWithdraw.h"
int NormalAccountWithdraw::withdraw(int balance, int money) {
	if (balance >= money)
		balance -= money;
	else
		printf("잔액이 부족합니다.\n");
	return balance;
}
