// codesymbols.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char s;
	cout<<"Symbol:|\t|"<<"Code:\n";
	for(int i = 14; i < 128; i++)
	{
		cout<<(char)i<<"|\t|"<<i<<"\n";
	}
	cin>>s;
	return 0;
}

