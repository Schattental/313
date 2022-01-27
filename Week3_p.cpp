#include <stdio.h>

int main()
{
	int index;
	index = 7;
	
	switch (index){
		case 1:
			printf("The sun is a star\n");
			break;
		case 2:
			printf("Mercury is a planet and it is terrestrial \n");
			break;
		case 3:
			printf("Venus is a planet, has an atmosphere and is terrestrial\n");
			break;
		case 4:
			printf("Earth is a planet, has an atmosphere and is terrestrial\n");
			break;
		case 5:
			printf("The Moon is terrestrial\n");
			break;
		case 6:
			printf("Mars is a planet, has an atmosphere and is terrestrial\n");
			break;
		case 7:
			printf("Jupiter is a planet and has an atmosphere\n");
			break;
		case 8:
			printf("Saturn is a planet and has an atmosphere\n");
			break;
		case 9:
			printf("Titan is terrestrial and has an atmosphere\n");
			break;
		case 10:
			printf("Uranus is a planet and has an atmosphere\n");
			break;
		case 11:
			printf("Neptune is a planet and has an atmosphere\n");
			break;
		case 12:
			printf("Pluto is terrestrial\n");
			break;
		default:
			printf("No celestial body found for the given Index: %d \n", index);
	}


}