#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
	int input, factor, result = 1;
	
	cout << "Enter number to calculate factorial of:" << endl;
	cin >> input;
	
	for (factor = 1; factor <= input; factor ++){
		result *= factor;
	}
	cout << "Factorial of "<< input << " is " << result << endl;
}
