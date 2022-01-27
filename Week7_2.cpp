#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void spread(float val1, float val2);

int main()
{
	float a, b;
	float diff;
	cout << "Enter two float values to spread to 100 numbers:" << endl;
	cin >> a >> b;
	if(a != b){
		if(a > b){
			spread(a, b);
		}else{
			spread(b, a);
		}
	}else{
		cout << "Please enter two valid floats" << endl;
	}
}

void spread(float val1, float val2){
	int i;
	float seperator = (val1 - val2)/100;
	FILE* fileOutput = fopen("spread.txt", "w");
	for(i = 0; i < 101; i++){
		fprintf(fileOutput, "%f, ", val2 + seperator*i);
		
	}
	fclose(fileOutput);
}
