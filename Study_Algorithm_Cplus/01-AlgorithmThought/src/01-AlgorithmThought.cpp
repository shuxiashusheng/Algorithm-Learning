//============================================================================
// Name        : 01-AlgorithmThought.cpp
// Author      : bss
// Version     :
// Copyright   : shishaobo.good@163.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * 递归算法
 */

/*
 *求阶乘 01_0_0
 */
int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}

/**
 *
 *数值转换 01_0_1
 */
void converTo(int number,int baseNumber)
{
	int i= number%baseNumber;
	if(number==0)
	{
		return;
	}
	else
	{
		cout<<i<<endl;
		converTo(number/baseNumber,baseNumber);
	}

}


int main() {
	cout << "!!!Hello 01_AlgorithmThought!!!" << endl; // prints !!!Hello 01_AlgorithmThought!!!
//	cout<<fact(9)<<endl;//01_0_0
	converTo(9,2);//  01_0_1
	return 0;
}
