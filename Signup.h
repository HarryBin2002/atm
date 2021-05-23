#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

string id, new_pass;

void request_signup()
{
	cout << "\t\t\t\t\tSIGN UP ACCOUNT" << endl;
	cout << "ENTER ID: "; cin >> id;
	fstream ofs1("account.txt", ios::out);
	ofs1 << id << endl;
	ofs1.close();
	cout << "ENTER PASSWORD: "; cin >> new_pass;
	fstream ofs2("password.txt", ios::out);
	ofs2 << new_pass << endl;
	ofs2.close();
	cout << "SIGN UP ACCOUNT SUCCESSFULLY" << endl;
	Sleep(3000);
	system("cls");
}
