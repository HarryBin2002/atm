#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <conio.h>
#include "login_function.h"
#include "send_money.h"
#include "withdraw.h"

using namespace std;

vector<string> tran_his;

void introduction()
{
	cout << "\t\t\t\t  WELCOME TO ATM" << endl;
	cout << "\t\t\t\tdesign by HARRY BIN" << endl;
	Sleep(3000);
	system("cls");
}

void continue_func()
{
	cout << "c - CONTINUE" << endl;
	cout << "e - EXIT" << endl;
}

void change_function()
{
	cout << "**************OPTIONS**************" << endl;
	cout << "1 - SEND MONEY" << endl;
	cout << "2 - WITHDDRAW MONEY" << endl;
	cout << "3 - CHECK TRANSACTION HISTORY" << endl;
	cout << "***********************************" << endl;

	{
		char ch = _getch();
		system("cls");
		
		if(ch == 49)
		{
			require_send();
			string str1 = re_str1(deposit);
			tran_his.push_back(str1);
			continue_func();
			char cont = _getch();
			system("cls");
			switch (cont)
			{
			case 99: 
				change_function();
			case 101: 
				system("cls");
				cout << "\t\t\t\tEND THE TRANSACTION" << endl;
				break;
			default:
				break;
			}
		}

		else if(ch == 50)
		{
			require_withdraw(sum_atm);
			string str2 = re_str2(withdraw_money);
			tran_his.push_back(str2);
			continue_func();
			char cont = _getch();
			system("cls");
			switch (cont)
			{
			case 99:
				change_function();
			case 101:
				system("cls");
				cout << "\t\t\t\tEND THE TRANSACTION" << endl;
				break;
			default:
				break;
			}
		}
			
		else if(ch == 51)
		{
			cout << "\t\t\t\t\t\tTRANSACTION HISTORY" << endl << endl;
			for (int i = 0; i < tran_his.size(); i++)
			{
				cout << tran_his[i] << endl;
			}
			Sleep(4000);
			system("cls");
			continue_func();
			char cont = _getch();
			system("cls");
			switch (cont)
			{
			case 99:
				change_function();
			case 101:
				system("cls");
				cout << "\t\t\t\tEND THE TRANSACTION" << endl;
				break;
			default:
				break;
			}
		}
		
	}
}

void login_function()
{
	bool isblock = false;
	int count = 0;
	while (count < 5)
	{
		require();
		if (check_acc(acc) && check_pass(pass))
		{
			system("cls");
			change_function();
			break;
		}
		else
		{
			count++;
			if (!check_acc(acc))
			{
				cout << "WRONG ACCOUNT" << endl;
				continue;
			}
			else if (!check_pass(pass))
			{
				cout << "WRONG PASSWORD" << endl;
				continue;
			}
		}
	}
}

int main()
{
	introduction();
	login_function();	

	return 0;
}