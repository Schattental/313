#include <stdio.h>
#include <iostream>
using namespace std;

void speedTorque(float r, float k, float i0, float v, float i, float &output1, float &output2);

int main()
{
	float resistance = 2.4, kay = 0.65, io = 0.09, voltage = 12.0, I = 0.5;
	float speed = 0;
	float torque = 0;
	
	speedTorque(resistance, kay, io, voltage, I, speed, torque);
	
	cout << "Speed of DC motor: " << speed << endl;
	cout << "Torque of DC motor: " << torque << endl;
}

void speedTorque(float r, float k, float i0, float v, float i, float &output1, float &output2){
	output1 = (v - r*i)/k;
	output2 = k*(i - i0);
}