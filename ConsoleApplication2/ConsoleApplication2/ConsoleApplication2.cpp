// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int age;
	string name;
	cout << "Enter your age" << endl;
	cin >> age;
	cout << "Enter your name" << endl;
	cin >> name;
	cout << "You are " << age << " years old, and your name is " << name << endl;;
	return 0;
}

