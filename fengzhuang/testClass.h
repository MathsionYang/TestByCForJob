#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class testClass
{
private:
	string name = "Apple";
	int num = 10;
public:
	string getName() {
		return name;
	}
	void printNum()
	{
		cout << "�̳�������" << endl;
	}
	virtual void test() {
		cout << 1 + 2 << endl;
	}
	inline int maxNum(int a, int b)
	{
		return  (a > b) ? a : b ;
	}
};

