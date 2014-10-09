	//
	//  NormalAccountWithdraw.cpp
	//  DesignPattern_Task_1
	//
	//  Created by Bross on 2014. 9. 30..
	//  Copyright (c) 2014³â Bross. All rights reserved.
	//

	#include "NormalAccount.h"

	NormalAccount::NormalAccount(CDate* openningAccountDay, int balance) :Account(openningAccountDay, balance)
	{
		this->setWithdrawBehavior(new NormalAccountWithdraw);
	}
	NormalAccount::NormalAccount(int balance) :Account(balance)
	{
		setWithdrawBehavior(new NormalAccountWithdraw);
	}

	NormalAccount::NormalAccount(CDate* openningAccountDay) : Account(openningAccountDay)
	{
		setWithdrawBehavior(new NormalAccountWithdraw);
	}

