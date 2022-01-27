#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, counter = 0;
	float y;
	int xMin = -4;
	int xMax = 17;
	
	for (x = xMin; x <= xMax; x++){
		y = pow(x, 3) -14*pow(x, 2) + 25*x - 12;
		if (y < 0){
			counter ++;
		}
	}
	cout << "Number of negative values = " << counter << endl;

}
