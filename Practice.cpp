#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
#include <algorithm>
using namespace std;


void factorInt();
void strLength();
void strSubsets();
void copyFile();
void fileStats();
void DataCleaner();
void Find();
void SortChars();

int main()
{
	
	SortChars();
	
}

void factorInt(){
	int x;
	int f;
	bool running = true;
	
	while (running == true){
		cout << "Enter number to display factors between 2 and 9 (0 to exit)" << endl;
		cin >> x;
		cout << endl;
		if(x == 0){
			running = false;
		}else{
		for(f = 2; f < 10; f++){
			if((x % f) == 0){
				cout << f << endl;
			}
		}
	}
}
}

void strLength(){
	int counter = 0;
	string input;
	cout << "Enter string to display its length" << endl;
	cin >> input;

	while(input[counter] != '\0'){
		counter++;
	}
	
	cout << "Length of string: " << counter << endl;
	
}

void strSubsets(){
	int i, j;
	string input;
	cout << "Enter string to display its subsets" << endl;
	cin >> input;
	
	for(i = 0; i < strlen(input.c_str()); i++){
		cout << input[i] << endl;
		for(j = i; j < strlen(input.c_str()); j++){
			cout << input[j];
		}
		cout << endl;
		for(j = 0; j < strlen(input.c_str())-i; j++){
			cout << input[j];
		}
		cout << endl;
	}
}	

void copyFile(){
	string line;
	string File = "Zero.txt";
	string fileName;
	fileName.assign(File, 0, File.length()-4);
	string newFile = fileName + "_copy.txt";
	ifstream myinput(File);
	ofstream myoutput(newFile);
	if(myinput.is_open()){
		while(getline(myinput, line)){
			if(myoutput.is_open()){
				myoutput << line << endl;
				
			}else{
				cout << "Unable to open file" << endl;
			}
			
		}
		myinput.close();
		myoutput.close();
	}else cout << "Unable to open file" << endl;
}

void fileStats(){
	string fName, line, word, line2;
	cout << "Enter name of file to get stats" << endl;
	cin >> fName;
	int lineCount = 0, wordCount = 0, charCount = 0;
	ifstream input(fName);
	if(input.is_open()){
		while(getline(input, line)){
			lineCount++;
			line2 = line;
			line2.erase(remove(line2.begin(), line2.end(), ' '), line2.end());
			charCount += line2.length();
			stringstream ss(line);
			while(ss >> word){
				wordCount++;
			}
		}
	}
	cout << "Number of words: " << wordCount << endl;
	cout << "Number of lines: " << lineCount << endl;
	cout << "Number of chars: " << charCount << endl;
}

void DataCleaner(){
	float rawV, avg, v = 0;
	int counter = 0, counter2 = 0, divider = 0;
	string line, lineValue;
	ifstream input("truck.txt");
	if(input.is_open()){
		while(getline(input, line)){
			stringstream ss(line);
			getline(ss, lineValue);
			istringstream(lineValue) >> rawV;
			if(rawV != 0){
				counter++;
				divider++;
				v += rawV;
			}else{
				counter++;
			}
			if(counter == 5){
				avg = v/divider;
				counter = 0;
				v = 0;
				divider = 0;
				counter2++;
				cout << "Average of truck data from time: " << counter2 << " is = " << avg << endl;
				
			}
			
		}
		
	}
}

void Find(){
	int i, j, counter = 0;
	string fileName, search, line;
	cout << "Enter name of file to be searched" << endl;
	cin >> fileName;
	cout << "Enter string to search for" << endl;
	cin >> search;
	
	ifstream input(fileName);
	if(input.is_open()){
		while(getline(input, line)){
			counter = 0; 	
			for(i = 0; i < line.length(); i++){
				if(search[0] == line[i]){
					for(j = 0; j < search.length(); j++){
						if(search[j] == line[i+j]){
							counter++;
						}else{
							continue;
						}
						if(counter == search.length()){
							cout << "Line with " << search << ":" << endl;						
							cout << line << endl;
						}
					}				
				}			
			}
		}
	}else{
		cout << "File could not be opened" << endl;	
	}
	input.close();

}


void SortChars(){
	int MAXCHARS;
	char letters[MAXCHARS];
	int charvalues[MAXCHARS];
	cout << "Enter some characters:" << endl;
	cin >> letters;
	
	cout << "You entered these letters:" << endl;
	
	
	for(int i = 0; i < strlen(letters) - 1; i++){
		for(int j = i + 1; j < strlen(letters); j++){
			if(letters[i] > letters[j]);
			char temp;
			
			temp = letters[i];
			letters[i] = letters[j];
			letters[j] = temp;
		}
	}
	cout << "Sorted characters:" << letters <<endl;
	
	
}