#include <stdio.h>
#include <cmath>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
	cout << "Elevation statistics:" << endl;
	int i, j;
	float raw = 0, total = 0, avg, square, total2 = 0, deviation;
	string filename = "elevation_map.txt";
	ifstream fileStream(filename);
	string rawLine, rawValue;
	for(i = 0; i < 8; i++){
		getline(fileStream, rawLine);
		stringstream lineStream(rawLine);
		for(j = 0; j < 8; j++){
			getline(lineStream, rawValue, ',');
			istringstream(rawValue) >> raw;
			total += raw;
		}
	}
	avg = total / 64;
	cout << "Mean = " << avg << endl;
	
	for(i = 0; i < 8; i++){
		getline(fileStream, rawLine);
		stringstream lineStream(rawLine);
		for(j = 0; j < 8; j++){
			getline(lineStream, rawValue, ',');
			istringstream(rawValue) >> raw;
			square = pow((raw - avg), 2);
			total2 += square;
		}
	}
	deviation = total2 / 64;
	cout << "Std. Dev. = " << deviation << endl;

}
