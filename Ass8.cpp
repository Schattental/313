#include <stdio.h>
#include <iostream>
using namespace std;

//declaring structure for payload data
struct payload{
	int passengers;
	int cargo;
};

//declaring class economics
class economics{
public:
	//storing all pre-defined values
	int revPass = 450;
	float revCarg = 4.25;
	int revTarg = 32000;
	//total number of passengers from each instance of payload
	int totalPassengers(int flights, payload flight[]){
		int sum = 0;
		for(int k = 0; k < flights; k++){
			sum += flight[k].passengers;
		}
		return sum;
	}
	//total cargo from each instance of payload
	int totalCargo(int flights, payload flight[]){
		int sum = 0;
		for(int f = 0; f < flights; f++){
			sum += flight[f].cargo;
		}
		return sum;
	}
	//total revenue added together from each instance of payload
	float totalRevenue(int flights, payload flight[]){
		float sum = 0;
		for(int c = 0; c < flights; c++){
			sum += flight[c].passengers * revPass;
			sum += flight[c].cargo * revCarg;
		}
		return sum;
	}
};

int main()
{
	//getting the number of flights
	int flights;
	cout << "Input number of flights:" << endl;
	cin >> flights;
	//defining flight with the number of flights to have the number of instances
	payload flight[flights];
	
	//getting all the passenger data and assigning it to the corresponding instance
	cout << "Input passenger data for all flights:" << endl;
	for(int i = 0; i < flights; i++){
		cin >> flight[i].passengers;
	}
	//getting all the cargo data and assigning it to the corresponding instance
	cout << "Input cargo data for all flights:" << endl;
	for(int j = 0; j < flights; j++){
		cin >> flight[j].cargo;
	}
	//defining an instance of economics with eco
	economics eco;
	
	//calculating the average of the total revenue across all flights
	float revAvg = eco.totalRevenue(flights, flight)/flights;
	
	//displaying the results of the methods in eco
	cout << "Total passengers: " << eco.totalPassengers(flights, flight) << endl;
	cout << "Total cargo: " << eco.totalCargo(flights,  flight) << " kg" << endl;
	cout << "Total revenue: $" << eco.totalRevenue(flights, flight) << endl;
	cout << "Average revenue: $" << revAvg << endl;
	
	//checking whether the average meets the target
	if(revAvg >= eco.revTarg){
		cout << "Aircraft is profitable" << endl;
	}else{
		cout << "Aircraft is not profitable" << endl;
	}
}
