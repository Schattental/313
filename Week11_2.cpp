#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	int i, N = 10000;
	float a, b, x, h;
	a = 0;
	b = 16;
	float H = 0;
	float dx = (b-a)/N;
	
	for(i = 0; i < N; i++){
		x = (i + 0.5)*dx + a;
		h = 0.1*x*(x - 7)*(x - 12)*sin((M_PI/16)*x) + 9;
		H += h*dx;
		
		
	}
	
	cout << "Cross-sectional area of rock pile is approx. : " << H << " m^2" << endl;
}
