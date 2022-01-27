#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
	int x, y, result;
	
	for (x = 1; x <= 21; x++){
		cout << "Factors of " << x << endl;
		for (y = 1; y <= x; y++){
			result = x % y;
			if (result == 0){
				cout << y << endl;
			}
		}
	}
	
	
}
