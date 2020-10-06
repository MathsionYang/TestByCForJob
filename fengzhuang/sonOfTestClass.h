#pragma once
#include "testClass.h"
class sonOfTestClass :public testClass
{
	virtual void test() { cout << 1 + 2 << endl; }

};

