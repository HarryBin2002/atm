#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

long long int sum_atm = 0, deposit, par_value;
int number;

bool check_par_value(long long int par_value)
{
	if (par_value == 5000 || par_value == 10000 || par_value == 20000 || par_value == 50000 || par_value == 100000 || par_value == 200000 || par_value == 500000)
	{
		return true;
	}
	else return false;
}

void require_send()
{
	long long int sum_check = 0;
	cout << "ENTER DEPOSIT: "; cin >> deposit;
	do
	{
		cout << "ENTER PAR VALUE: "; cin >> par_value;
		cout << "ENTER NUMBER: "; cin >> number;
		if (check_par_value(par_value))
		{
			sum_check += par_value * number;

		}
		else
		{
			cout << "PAR VALUE INVALID" << endl;
			Sleep(2000);
			system("cls");
			break;
		}
	} while (deposit > sum_check);
	if (sum_check == deposit)
	{
		system("cls");
		cout << "SEND MONEY SUCCESSFULLY" << endl;
		sum_atm += deposit;
		Sleep(2000);
		system("cls");
	}
}
string re_str1(long long int deposit)
{
	string combine_str1 = "you sent: " + to_string(deposit);
	return combine_str1;
}
 



