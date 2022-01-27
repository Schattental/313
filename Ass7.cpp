//importing lots of stuff
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
	//initializing all the needed variables
	int i;
	int numOfDepth;
	float y, k, depth, depthSteps;
	//Ask for user input
	cout << "Input rock unit weight (kN/m3):" << endl;
	cin >> y;
	cout << "Input k value:" << endl;
	cin >> k;
	cout << "Input number of depth values:" << endl;
	cin >> numOfDepth;
	cout << "Input first depth value (m):" << endl;
	cin >> depth;
	cout << "Input depth increment (m):" << endl;
	cin >> depthSteps;
	cout << "Horizontal stress values (kPa):" << endl;
	
	//initializing the three arrays
	float depthArray[numOfDepth];
	float vStress[numOfDepth];
	float hStress[numOfDepth];
	
	//assigning the values to all three arrays
	for(i = 0; i < numOfDepth; i++){
		depthArray[i] = depth + depthSteps*i;
		vStress[i] = depthArray[i]*y;
		hStress[i] = vStress[i]*k;
		//printing the horizontal Stress values as they come
		cout << hStress[i] << endl;
	}
	//opening or generating the txt file
	FILE* fileOutput = fopen("outputFileB.txt", "w");
	//inserting the depth and vertical stress values seperated by a comma as two columns
	for(i = 0; i < numOfDepth; i++){
		fprintf(fileOutput, "%.0f,%.0f", depthArray[i], vStress[i]);
		//making sure last line is not created for AutoGradr
		if(i < numOfDepth - 1){
			fprintf(fileOutput, "\n");
		}

	}
	//closing the txt file
	fclose(fileOutput);

}
