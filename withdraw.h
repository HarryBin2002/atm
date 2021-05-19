#pragma once
#include <iostream>
#include <string>

using namespace std;

long long int withdraw_money, par_values;
int numbers;

bool check_par_values(long long int par_values)
{
	if (par_values == 5000 || par_values == 10000 || par_values == 20000 || par_values == 50000 || par_values == 100000 || par_values == 200000 || par_values == 500000)
	{
		return true;
	}
	else return false;
}


void require_withdraw(long long int sum_atm)
{
	long long int sums_check = 0;
	cout << "ENTER NUMBER OF MONEY: "; cin >> withdraw_money;
	do
	{
		
		if (sum_atm >= withdraw_money)
		{
			cout << "ENTER PAR VALUE: "; cin >> par_values;
			cout << "ENTER NUMBER: "; cin >> numbers;
			if (check_par_values(par_values))
			{
				sums_check += par_values * numbers;
				

			}
			else
			{
				cout << "PAR VALUE INVALID" << endl;
				break;
			}
		}
		else
		{
			cout << "YOUR ACCOUNT IS NOT ENOUGH MONEY";
			Sleep(3000);
			system("cls");
		}
	} while (withdraw_money > sums_check);
	if (sums_check == withdraw_money)
	{
		system("cls");
		cout << "WITH DRAW MONEY SUCCESSFULLY" << endl;
		sum_atm -= withdraw_money;
		Sleep(2000);
		system("cls");
	}
}


string re_str2(long long int withdraw_money)
{
	string combine_str2 = "you withdrew: " + to_string(withdraw_money);
	return combine_str2;
}