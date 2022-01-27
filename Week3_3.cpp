#include <stdio.h>

int main()
{
	int speed, slope;
	speed = 190;
	slope = -3;
	printf("Speed: %d\nSlope: %d\n", speed, slope);
	
	if (slope > 0){
		if (speed >= 100){
			printf("No changes applied\n");
			}
		else if (speed < 100){
			printf("Applied gas\n");
			}
		}
	if (slope < 0){
		if (speed > 100){
			printf("Applied brakes\n");
			}
		else if (speed <= 100){
			printf("No changes applied\n");
			}
		}
	if (slope == 0){
		if (speed > 100){
			printf("Applied brakes\n");
			}
		else if (speed < 100){
			printf("Applied gas\n");
		}
		else if (speed = 100){
			printf("No changes applied\n");
			}
		}

}
