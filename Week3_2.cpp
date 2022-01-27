#include <stdio.h>


int main()
{
	int range, angle;
	range = 9;
	angle = 20;
	
	if (range < 10){
		printf("Contact is near\n");
		if (angle > 180){
			printf("Contact is behind\n");
		}
		else if (angle <= 180){
			printf("Contact is ahead\n");
			
		}
	}
	if (range >= 10)
		printf("Contact is far\n");
	
	
	}
