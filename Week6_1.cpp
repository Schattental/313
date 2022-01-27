#include <cmath>
#include <stdio.h>
#include <iostream>
using namespace std;

void crossP(float vector1[], float vector2[], float output[]);
float w;

int main()
{
	int i;
	float result[3];
	float u[3]= {3.9, -0.4, -1.2}, v[3] = {0.6, 4.5, -8.5};
	crossP(u, v, result);
	for(i = 0; i < 3; i++){
		cout << result[i] << endl;
	}

}

void crossP(float vector1[], float vector2[], float output[]){
	output[0] = (vector1[1]*vector2[2]) - (vector1[2]*vector2[1]);
	output[1] = (vector1[2]*vector2[0]) - (vector1[0]*vector2[2]);
	output[2] = (vector1[0]*vector2[1]) - (vector1[1]*vector2[0]);
}
