//
//  NormalAccountWithdraw.cpp
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014�� Bross. All rights reserved.
//

#include "NormalAccountWithdraw.h"
int NormalAccountWithdraw::withdraw(int balance, int money) {
	if (balance >= money)
		balance -= money;
	else
		printf("�ܾ��� �����մϴ�.\n");
	return balance;
}
