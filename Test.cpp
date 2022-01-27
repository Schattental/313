#include <stdio.h>
#include <iostream>

using namespace std;

#define N 12

int main(){
	
	float average12X;
	float average12Y;
	
	float coordinates[N][2];
	
	for(int i = 0; i <= N; i++){
		scanf("%f, %f", &coordinates[i][0],&coordinates[i][1]);
	}
	
	for (int c = 0; c < N; c++){
		//adding all values of the array
		average12X += coordinates[c][0];
		if (c != N-1){
			printf("%.1f,", coordinates[c][0]);
			//when the for loop reaches the last value ditch the comma and end line
		}else { 
			printf("%.1f,\n", coordinates[c][0]);
		}
	}
	for (int c = 0; c < N; c++){
		//adding all values of the array
		average12Y += coordinates[c][1];
		if (c != N-1){
			printf("%.1f,", coordinates[c][1]);
			//when the for loop reaches the last value ditch the comma and end line
		}else { 
			printf("%.1f\n\n", coordinates[c][1]);
		}
	}
	
	printf("Average across X: ","%.1f\n", average12X);
	printf("Average across Y: ","%.1f", average12Y);
	
	
	
	
}