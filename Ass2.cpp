//MNTC313 Assignment 2 Starter Code
//You will need to add headers, variables, calculations and print statements to complete the code
//Variables for user input have been provided already
//Do not alter the user input statement unless you are comfortable with user input already!
#include <cmath>
#include <string>
#include <iostream>

int main()
{
	float areaC1, areaC2, areaTRound, areaTStraight, areaTotal, cost;
	float tLength, tRadius, tWidth; 
	
	scanf("%f, %f, %f", &tLength, &tRadius, &tWidth);
	//In the console, enter length, radius and height on a single line, each separated by a comma and space
	
	//Calculating the big and small circle area:
	areaC1 = pow((tRadius+tWidth), 2)*3.14;
	areaC2 = pow(tRadius, 2)*3.14;
	
	//Subtracting for to have only the track left
	areaTRound = areaC1 - areaC2;
	
	//Computing the rectangular portion
	areaTStraight = (tLength*tWidth)*2;
	
	//Adding the areas and calculating the cost
	areaTotal = areaTRound + areaTStraight;
	cost = areaTotal * 8.5;
	
	//Why aren't we using M_PI??
	
	//Printing the results and using ".0" to get rid of decimals 
	printf("Track surface area:\n%.0f m2\nTrack material cost:\n$%.0f\n", areaTotal, cost);
	
}