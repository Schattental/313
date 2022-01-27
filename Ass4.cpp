//MNTC313 Assignment 4 Starter Code
//You will need to add headers, variables, calculations and print statements to complete the code
//Variables for user input have been provided already
//Do not alter the user input statement unless you are comfortable with user input already!
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;


int main()
{
	//initializing the variables
	float purchasePrice, deprRate;
	int usefulLife, n;
	float assetValue;
	float averageAV;
	
	//getting user input
	scanf("%f, %f, %d", &purchasePrice, &deprRate, &usefulLife);
	//In the console, enter purchase price, depreciation rate and useful life separated by a comma and a space
	
	//assigning all assetValues added together to assetValue for a total
	for (n = 1; n <= usefulLife; n++){
		assetValue += purchasePrice*pow(1-deprRate, n);
	}
	//dividing by the useful life for the average asset value and subrtacting 1 from n to account for year 0
	averageAV = assetValue / (n - 1);
	cout << "Average book value: $" << averageAV << endl;
	
	//calculating the assetValue after 10 years
	assetValue = purchasePrice*pow(1-deprRate, 10);
	cout << "Book value after 10 years: $" << assetValue << endl;

	//calculating the assetValue after its useful life years
	assetValue = purchasePrice*pow(1-deprRate, usefulLife);
	//rounding to have the correct console output
	int roundedAV = round(assetValue);
	cout << "Book value after "<< usefulLife << " years: $" << roundedAV <<endl;
	
	//determining whether the vehicle is economically feasible
	if (assetValue < 10000){
		cout << "Vehicle should not be purchased" << endl;
		
	}else{
		cout << "Vehicle should be purchased" << endl;
		
	}
}