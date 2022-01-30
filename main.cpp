#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main()
{


	float num1, num2, result;
	char operand;
	char option;

	system("color b");
	cout << "my first calculator uwu\n";

	Sleep(1000);
	system("cls");
	goto valuepick;

valuepick:


	cout << "Num 1:\n";
	cin >> num1;

	cout << "Num 2:\n";
	cin >> num2;


	cout << "Operator:\n";
	cin >> operand;


	switch (operand)
	{

	case '+':
		result = num1 + num2;
		cout << "Result: \n" << result;
		break;

	case '-':
		result = num1 - num2;
		cout << "Result: \n" << result;
		break;



	case '*':
		result = num1 * num2;
		cout << "Result: \n" << result ;
		break;

	case '/':
		result = num1 / num2;
		cout << "Result: \n" << result;
		break;

	

	default:
		cout << "Error.\n";
		system("pause");
		goto valuepick;
	}


	return 0;
}


