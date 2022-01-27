//MNTC313 Assignment 3 Starter Code
//You will need to add headers, variables, calculations and print statements to complete the code
//Variables for user input have been provided already
//Do not alter the user input statement unless you are comfortable with user input already!
#include <stdio.h>
#include <cmath>

int main()
{
	//initializing the floats
	float elasticMod, strain, stress, cStrength, tStrength;
	
	//max compression and tensile strength
	cStrength = -50.0;
	tStrength = 10.0;
	
	scanf("%f, %f", &elasticMod, &strain);
	//In the console, enter elastic modulus and strain values on a single line separated by a comma and space. 
	//calculating the stress value
	stress = elasticMod * strain;
	//printing the stress value
	printf("Stress value: %.2f MPa\n", stress);
	
	//checking for tension
	if (stress > 0){
		printf("Bridge deck in tension\n");
		}
	//checking for max tensile strength
	if (stress > tStrength){
		printf("Danger: tensile strength exceeded\n");
	//printing the safe statement in case of tension
	} else if (stress < tStrength && stress > 0) {
		printf("Bridge deck safe\n");
	}

	//checking for compression
	if (stress < 0){
		printf("Bridge deck in compression\n");
		}
	//checking for max compression strength
	if (stress < cStrength){
		printf("Danger: compressive strength exceeded\n");
	//printing safe statement in case of compression
	} else if (stress > cStrength && stress < 0) {
		printf("Bridge deck safe\n");
	}
	//declaring no stress
	if (stress == 0){
		printf("No stress in bridge\n");
	}
}