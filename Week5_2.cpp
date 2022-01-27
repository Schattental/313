#include <stdio.h>
#include <cmath>

#define N 12

int main()
{
	float average;
	float sum;
	float standard;
	float list [N] = {5.6, 11.7, 8.5, 1.9, 0.5, 9.9, 5.6, 6.8, 5.8, 3.5, 8.0, 14.0};
	
	int i;
	
	for (i = 0; i < N; i++){
		average += list[i];
	}
	average /= N;
	printf("Average of array = %f \n", average);
	
	for (i = 0; i < N; i++){
		sum += pow((list[i] - average),2);
	}
	standard = sqrt(sum/(N-1));
	
	printf("Standard deviation of array = %f \n", standard);

}
