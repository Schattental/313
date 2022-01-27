#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class pv{
public:
	
	string shape;
	float r, t;
	
	void stress(float &stressH, float &stressV, float P){
		if(strcmp(shape.c_str(), "sphere")){
			stressH = stressV = (P * r)/(2 * t);
		}else if(strcmp(shape.c_str(), "cylinder")){
			stressH = (P * r)/t;
			stressV = (P * r)/(2 * t);
		}else{
			cout << "Enter valid shape for vessel (sphere or cylinder)" << endl;
		}
	}
};

struct stress{
	float strsH;
	float strsV;
};

int main()
{
	stress v1, v2;
	
	pv vessel1;
	vessel1.shape = "sphere";
	vessel1.r = 1.4;
	vessel1.t = 0.005;
	
	pv vessel2;
	vessel2.shape = "cylinder";
	vessel2.r = 5.4;
	vessel2.t = 0.018;
	
	vessel1.stress(v1.strsH, v1.strsV, 40);
	vessel2.stress(v2.strsH, v2.strsV, 40);
	
	cout << "Stress values for vessel 1 = " << v1.strsH << ", " << v1.strsV << endl;
	cout << "Stress values for vessel 2 = " << v2.strsH << ", " << v2.strsV << endl;
}
