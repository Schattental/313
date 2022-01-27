#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;


int main()
{
	int x;
	int v;
	int counter = 0;
	int count2 = 0;
	cout << "Enter int to search for: ";
	cin >> x;
	string filename = "values.txt";
	ifstream fileStream(filename);
	string rawLine, rawValue;
	while(getline(fileStream, rawLine)){
		//getline(fileStream, rawLine);
		stringstream lineStream(rawLine);
		getline(lineStream, rawValue);
		istringstream(rawValue) >> v;
		if(v == x){
			counter ++;
		}
		count2 ++;
	}
	printf("Number of %d = %d in the file %s\n", x, counter, filename.c_str());
	
}
