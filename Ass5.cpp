//MNTC313 Assignment 5 Starter Code
//You will need to add headers, variables, calculations and print statements to complete the code
//Variables for user input have been provided already
//Do not alter the user input statement unless you are comfortable with user input already!
#include <stdio.h>
#include <cmath>

#define N 12 //Number of trials

int main()
{
	//initianizing variables to iterate through 2D matrix
	int c;
	int d;
	//initializing a third int for counting globally
	int con = 0;
	//initializing two floats for averages
	float average12;
	float averageRow;
	
	float molarity[N]; //Initialize row array
	float molMatrix[3][4];//Initialize a matrix of mol values

	for (int i = 0; i < N; i++)
	{
		scanf("%f", &molarity[i]);
	}
	//In the console, enter the 12 trial values on a single line separated by spaces (ie. 1.1 5.6 4.4 etc.)
	
	//Iterating through the molarity array for printing and for the average
	for (c = 0; c < 12; c++){
		//adding all values of the array
		average12 += molarity[c];
		if (c != 11){
			printf("%.1f,",molarity[c]);
			//when the for loop reaches the last value ditch the comma and end line
		}else { 
			printf("%.1f\n\n", molarity[c]);
		}
	}
	//averaging
	average12 /= N;
	//printing the resulting average
	printf("Average molarity: %.1f M\n\n", average12);
	
	//assigning each value from molarity to the molMatrix with con as a counter 
	for (c = 0; c < 3; c++){
		for (d = 0; d < 4; d++){
			molMatrix[c][d] = molarity[con];
			con++;
		}
	}
	//printing a new formation with various conditions
	for (c = 0; c < 12; c++){
		if (c < 3){
			printf("%.1f,", molarity[c]);
		}else if (c == 3){
			printf("%.1f\n", molarity[c]);
		}else if (c > 3 && c < 7){
			printf("%.1f,", molarity[c]);
		}else if (c == 7){
			printf("%.1f\n", molarity[c]);
		}else if (c > 7 && c < 11){
			printf("%.1f,", molarity[c]);
		}else if (c == 11){
			printf("%.1f\n\n", molarity[c]);
		}
	}
	//iterating through the new matrix
	for (c = 0; c < 3; c++){
		for (d = 0; d < 4; d++){
			averageRow += molMatrix[c][d];
		}
		//averaging for every row
		averageRow /= 4;
		//printing row average
		printf("Row %d average molarity: %.1f M\n", c+1, averageRow);
		//resetting averageRow to be able to keep using it for every row
		averageRow = 0;
	}
}
