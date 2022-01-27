#include <stdio.h>
#include <cmath>



int main()
{
	int i;
	int j;
	float averageStations [3];
	float averageOperators [4];
	float readings [3][4] = { 	{39.8, 38.3, 36.1, 38.5}, 
								{47.7, 46.3, 46.8, 47.1}, 
								{18.6, 18.4, 18.9, 18.8} };
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			averageStations[i] += readings[i][j];
		}
		averageStations[i] /= 4;
		printf("The average for station %d is %f \n", i+1, averageStations[i]);
	}
	for (j = 0; j < 4; j++){
		for (i = 0; i < 3; i++){
			averageOperators[j] += readings[i][j];
		}
		averageOperators[j] /= 3;
		printf("The average for operator %d is %f \n", j+1, averageOperators[j]);
	}
	

}
