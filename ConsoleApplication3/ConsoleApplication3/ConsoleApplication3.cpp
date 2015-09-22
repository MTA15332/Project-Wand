// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{



	string firstname;
	string teacherName;
	string food;
	string color;
	int degrees;
	string adjective;
	string animal;

	cout << "Enter your Firstname \n";
	cin >> firstname;
	cout << "Enter your Teachers name \n";
	cin >> teacherName;
	cout << "Enter a food \n";
	cin >> food;
	cout << "Enter a color \n";
	cin >> color;
	do{
		cout << "Enter a number between 39-45 \n";
		cin >> degrees;
	} while (degrees < 39 || degrees > 45);
	
	cout << "Enter a adjective \n";
	cin >> adjective;
	cout << "Enter an animal \n";
	cin >> animal;

	cout << endl;
	cout << "Dear " << teacherName << "," << endl;
	cout << "I am sorry that i am not able to turn in my homework at this time." << endl;
	cout << "First, i ate a rotten " << food << ", which made me turn " << color << " and" << endl;
	cout << "extremely ill. I came down with a fewer of " << degrees << "." << endl;
	cout << "Next, my " << adjective << " pet " << animal << " must have smelled the remains" << endl;
	cout << "of the " << food << " on my homework, because he ate it. I am currently" << endl;
	cout << "rewriting my homework and hope that you will accept it late." << endl;
	cout << endl;
	cout << "sincerely, " << endl;
	cout << firstname;


	return 0;
	
}

