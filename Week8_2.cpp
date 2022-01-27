#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class component{
public:
	string Material;
	float E;
	float A;
	float L;
	
	float stress(float load){
		float s;
		s = load/A;
		return s;
	}
	
	float strain(float load){
		float st;
		st = load/(E * pow(10, 9) * A);
		return st;
	}
	
	float deflection(float load){
		float defl;
		defl = (load * L)/(E * pow(10, 9) * (A/10000));
		return defl;
	}
	
};

int main()
{
	component metal;
	metal.Material = "Aluminium";
	metal.E = 70;
	metal.A = 75;
	metal.L = 2.8;
	
	float force = 6500;
	
	cout << "Stress for " << metal.Material << " with a load of " << force << "N = " << metal.stress(force) << endl;
	cout << "Strain for " << metal.Material << " with a load of " << force << "N = " << metal.strain(force) << endl;
	cout << "Delfection for " << metal.Material << " with a load of " << force << "N = " << metal.deflection(force) << endl;
	

}
