//
//  SavingAccount.cpp
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 30..
//  Copyright (c) 2014�� Bross. All rights reserved.
//

#include "SavingAccount.h"

SavingAccount::SavingAccount(CDate* openningAccountDay, int balance) :
Account(openningAccountDay, balance) {
	expirationDate = openningAccountDay;
	expirationDate->setFullYear(expirationDate->getFullYear() + 2);
	setWithdrawBehavior(new SavingAccountWithdraw(expirationDate));
}

SavingAccount::SavingAccount(int balance) : Account(balance) {
	this->openningAccountDay = new CDate();
	expirationDate = openningAccountDay;
	expirationDate->setFullYear(expirationDate->getFullYear() + 2);
	setWithdrawBehavior(new SavingAccountWithdraw(expirationDate));
}
SavingAccount::SavingAccount(CDate* openningAccountDay) :Account(openningAccountDay){
	expirationDate = openningAccountDay;
	expirationDate->setFullYear(expirationDate->getFullYear() + 2);
	setWithdrawBehavior(new SavingAccountWithdraw(expirationDate));

}
void SavingAccount::display()
{
	printf("���� ���� ----\n");
	cout << "���� �ܰ� : " << balance << " ��� ������ : " << expirationDate->toString() << endl << endl;
}