#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int i, N = 10000;
	float a, b, t;
	a = 0;
	b = 600;
	float vx, vy, x = 0, y = 0;
	float dt = (b-a)/N;
	
	for(i = 0; i < N; i++){
		t = (i + 0.5)*dt + a;
		vx = 0.006*t - 0.001;
		vy = 0.002*t + 0.5*cos(0.03*t);
		x += vx*dt;
		y += vy*dt;
	}
	
	cout << "Position of ship after moving in interval: (" << a << ", " << b << ") is: (" << x << ", " <<  y << ")" << endl;
	
	return 0;
}
