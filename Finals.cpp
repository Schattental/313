#include <stdio.h>
#include <iostream>
#include <string>
#include <iterator>

using namespace std;

void ST();
void burp(int num);
int sumArr(int arr[], int len);

int main()
{
	int ar[] = {-2, 1, 4, 5, 77, -1, -33, 9, 88, 234, -993};
	int length = sizeof(ar)/sizeof(ar[0]);
	
	
	
	
}

void ST(){
	float v, i;
	float om, to;
	cout << "Enter voltage and current of motor:" << endl;
	cin >> v >> i;
	
	float R = 2.4;
	float k = 0.65;
	float i0 = 0.09;
	om = (v - R*i)/k;
	to = k*(i - i0);
	
	printf("Speed of motor: %.2f | Torque of motor: %.2f\n", om, to);
}

void burp(int num){
	string word;
	word[0] = 'B';
	word[1] = 'u';
	for(int i = 2; i < num+2; i++){
		word[i] = 'r';
	}
	word[num+3] = 'p';
	cout << word << endl;
}

int sumArr(int arr[], int len){
	int sum = 0;
	for(int i = 0; i < len; i++){
		if(arr[i] < 0 ){
			arr[i] *= -1;
		}
	}
	for(int i = 0; i < len; i++){
		sum += arr[i];
	}
	return sum;
}