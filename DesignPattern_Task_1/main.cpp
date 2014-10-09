//
//  main.cpp
//  DesignPattern_Task_1
//
//  Created by Bross on 2014. 9. 26..
//  Copyright (c) 2014³â Bross. All rights reserved.
//

#include "CDate.h"
#include "Account.h"
#include "NormalAccount.h"
#include "MinusAccount.h"
#include "SavingAccount.h"


int main() {
	Account *normal;
	normal = new NormalAccount(new CDate(), 10000);
	normal->deposit(1000);
	normal->display();
	normal->withdraw(10000);
	normal->display();

	Account *minus;
	minus = new MinusAccount(new CDate(), 10000);
	minus->display();
	minus->withdraw(10000);
	minus->display();
	minus->withdraw(100000);
	minus->display();

	CDate *d = new CDate();
	d->setFullYear(d->getFullYear() -3);
	Account *saving = new SavingAccount(d, 10000);
	saving->display();
	saving->withdraw(100);
	saving->display();
	saving->withdraw(10000);
	saving->display();

}
