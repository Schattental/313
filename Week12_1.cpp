#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void clear();

int main()
{
	float tFinal = 25;
	float tDuration = 5;
	float P0 = 100;
	float m = 3.5;
	float g = 9.8;
	float t, P, xdd, x = 0, xd = 0;
	float mu = 0.1;
	
	int k, N = 10000;
	float dt;
	dt = tFinal/N;
	
	for(k = 0; k < N; k++){
		t = k*dt;
		if(t <= tDuration)
			P = P0;
		else{
			P = 0;
		}
		
		xdd = P/m - mu*g*xd;
		x += xd*dt;
		xd += xdd*dt;
		
		printf("t = %.2f, x = %.4f, xd = %.4f\n", t, x ,xd);
	}

}
