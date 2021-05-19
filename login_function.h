#pragma once
#include <iostream>
#include <fstream>

using namespace std;

string acc, pass;

void require()
{
	cout << "ENTER YOUR ACCOUNT: "; cin >> acc;
	cout << "ENTER YOUR PASSWORD: "; cin >> pass;
}

bool check_acc(string acc)
{
	fstream ifs; ifs.open("account.txt");
	string s;
	while (ifs >> s)
	{
		if (s == acc) return true;
	}
	return false;
}

bool check_pass(string pass)
{
	fstream ifs; ifs.open("password.txt");
	string s;
	while (ifs >> s)
	{
		if (s == pass) return true;
	}
	return false;
}

