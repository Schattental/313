#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

struct monitor{
	string Manufacturer;
	float Size;
	int Resolution[2];
	int Refresh;
};

int main()
{	
	monitor disp1;
	disp1.Manufacturer = "HP";
	disp1.Size = 17.0;
	disp1.Resolution[0] = 1920;
	disp1.Resolution[1] = 1080;
	disp1.Refresh = 120;
	
	monitor disp2;
	disp2.Manufacturer = "Dell";
	disp2.Size = 15.6;
	disp2.Resolution[0] = 1366;
	disp2.Resolution[1] = 768;
	disp2.Refresh = 60;
}
