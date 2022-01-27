//MNTC313 Assignment 6 Starter Code
//You will need to add headers, variables, calculations and print statements to complete the code
//Variables for user input have been provided already
//Do not alter the user input statement unless you are comfortable with user input already!
#include <cmath>
#include <stdio.h>
#include <iostream>
using namespace std;

//defining the function with all its inputs and outputs
float trajectory(float velocity, float angle, float &horizontalV, float &hMax);
//defining a global bool for the target condition
bool boolTarget;

int main()
{
	//defining variables for the function
	float distanceX = 0, hVel = 0, maxH = 0;
	float v0, theta;
	scanf("%f, %f", &v0, &theta);
	//In the console, enter the initial velocity in m/s and the launch angle in degrees, separated by a comma and space
	
	//taking the return value for the function "trajectory"
	distanceX = trajectory(v0, theta, hVel, maxH);
	
	//printing the results of the function
	printf("Horizontal launch velocity: %.1f m/s\n", hVel);
	printf("Maximum height: %.1f m\n", maxH);
	printf("Horizontal distance: %.1f m\n", distanceX);
	
	//printing if the condition was met
	if (boolTarget == true){
		printf("Target distance met\n");
	}else if (boolTarget == false){
		printf("Target distance not met\n");
	}
}
//writing the function
float trajectory(float velocity, float angle, float &horizontalV, float &hMax){
	float g = 9.8;
	//horizontal distance x
	float distX = (pow(velocity, 2) * sin(2*((angle*M_PI)/180)))/g;
	//horizontal velocity
	horizontalV = velocity * cos(((angle*M_PI)/180));
	//maximum vertical height
	hMax = (pow(velocity, 2) * pow(sin(((angle*M_PI)/180)), 2))/(2*g);
	//determining whether the goal distance has been reached
	if (distX >= 75){
		boolTarget = true;
	}else {
		boolTarget = false;
	}
	//returning the value to the function to have one less variable in the input
	return distX;
}