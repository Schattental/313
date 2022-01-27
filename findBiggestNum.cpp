#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;


int main()
{
	float old = 0;
	float v;
	int count2 = 0;
	string filename = "precip.txt";
	ifstream fileStream(filename);
	string rawLine, rawValue;
	while(getline(fileStream, rawLine)){
		stringstream lineStream(rawLine);
		getline(lineStream, rawValue);
		istringstream(rawValue) >> v;
		if(v > old){
			old = v;
		}
		count2 ++;
	}
	printf("Largest value in %s is %.3f \n",filename.c_str(), old);
	printf("Lines read: %d\n", count2);
	
}
