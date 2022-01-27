#include <stdio.h>
#include <bitset>
#include <iostream>
int main(int argc, char **argv){
	std::string binary = std::bitset<8>(86).to_string();
	std::cout<<binary<<"\n";
	
	
	
	}
