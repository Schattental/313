#include <cmath>
#include <stdio.h>
#include <iostream>


using namespace std;

int main()
{
	float num1, num2, result;
	char op;
	while (num1 != 666){
		system("cls");
		cout << "--Enter the operation--" << endl;
		cin >> num1;
		cin >> op;
		cin >> num2;
		
		switch (op){
			case '+':
			result = num1 + num2;
			break;
			case '-':
			result = num1 - num2;
			break;
			case '*':
			result = num1 * num2;
			break;
			case '/':
			result = num1 / num2;
			break;
			case 'p':
			result = pow(num1, num2);
			break;
			default:
			cout << "Enter a valid operator" << endl;
			}
		cout << num1 << " " << op << " " << num2 << " =" << endl;
		cout << result << endl;
		system("pause");
	}
}
