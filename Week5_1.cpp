#include <stdio.h>
#include <cmath>
#define N 10

int main()
{
	float coords [2][N] = {	{0, 0.1, 0.2, 0.4, 0.5, 0.6, 0.8, 1.3, 1.5, 1.6}, 
							{0, 0.4, 0.7, 1.0, 1.5, 1.6, 1.9, 2.1, 2.4, 2.5}};
	float distances [N-1];
	float angles [N-1];
	
	int i;
	
	for (i = 0; i < N; i ++){
		distances [i] = sqrt(pow((coords[0][i+1] - coords[0][i]), 2) + pow((coords[1][i+1] - coords[1][i]), 2));
		angles [i] = atan((coords[1][i+1] - coords[1][i])/(coords[0][i+1] - coords[0][i]));
		printf("Distance %d = %f \n", i, distances[i]);
		printf("Angle %d = %f \n", i, angles[i]);
	}
	

}
