#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct haul{
	float mass;
	float grade;
};

class schedule{
	float price;
	float quota;
public:
	
	schedule(){
		price = 9000;
		quota = 1200;
	}
	
	 int mTotal(haul h[]){
		int total;
		for(int i = 0; i < 6; i++){
			total += h[i].mass;
		}
		return total;
	}
	
	float valTotal(haul h[]){
		float mOre = 0;
		float valOre = 0;
		for(int i = 0; i < 6; i++){
			mOre += h[i].grade * h[i].mass;
		}
		valOre = mOre * price;
		return valOre;
	}
	
	float qFraction(haul h[]){
		float mOre = 0;
		float f;
		for(int i = 0; i < 6; i++){
			mOre += h[i].grade * h[i].mass;
		}
		f = mOre / quota;
		return f;
	}
};

int main()
{
	schedule sced;
	haul h[6];
	h[0].mass = 5432; h[1].grade = 0.04;
	h[1].mass = 6109; h[2].grade = 0.03;
	h[2].mass = 5870; h[3].grade = 0.05;
	h[3].mass = 4985; h[4].grade = 0.04;
	h[4].mass = 5665; h[5].grade = 0.06;
	h[5].mass = 5144; h[6].grade = 0.03;
	
	
	cout.precision(0);
	
	cout << fixed << "Ore value: $" << sced.valTotal(h) << endl;
	cout << fixed << "Total hauled mass: " << sced.mTotal(h) << " kg" << endl;
	cout << fixed << "Quota fraction: " << sced.qFraction(h) << endl;

}
