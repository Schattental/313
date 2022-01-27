#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	char grade = 'D';
	while (grade != 'Z'){
	cout << "Enter a grade: " << endl;
	cin >> grade;
		switch (grade){
			case 'A':
				cout << "Excellent!" << endl;
				break;
			case 'B':
				cout << "Awesome!" << endl;
			case 'C':
				cout << "Pretty good!" << endl;
				break;
			case 'D':
				cout << "Passed!" << endl;
				break;
			case 'F':
				cout << "Sad boi" << endl;
				break;
			default:
				cout << "Invalid input" << endl;
		}
	}
}
