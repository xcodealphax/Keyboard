// KeyBoard_win32.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"KeyBoard_win32.h"

#include<iostream>
#include<string>
using namespace std;





int _tmain(int argc, _TCHAR* argv[])
{



	while (1)
	{
		string str;
		if (_kbhit())
		{
			cin>>str;
			cout << str << endl;
		}
	}
	return 0;
}

