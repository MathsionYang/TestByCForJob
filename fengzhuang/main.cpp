#include <string>
#include <stdio.h>
#include "testClass.h"
#include "sonOfTestClass.h"
#include<iostream>
using namespace std;
#define  MAXTest(a£¬b) ((a)>(b)?(a):(b))
int main()
{
	//·â×°testClass
	string myName;
	testClass tc;
	myName = tc.getName();
	 cout << myName << endl;
	 //¼Ì³ÐtestClass
	 sonOfTestClass stc;
	 stc.printNum();
	 testClass *p = new sonOfTestClass;
	 p->test();
	 int a = tc.maxNum(2, 3);
	 cout << a << endl;

	 int c = 2, b = 0;
	 int f = MAXTest(++c, b);
	 cout << f << "+++++" << b << endl;
	 //MAXTest(c++, b+10);
	 //cout << c << "+++++" << b << endl;

	 return 0;
}