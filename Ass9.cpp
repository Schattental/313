#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

//defining size of array
#define SIZE 1000

//global bool to check if operations failed
bool failed = false;

//making a stack 
class Stack{
	int stackArray[SIZE];
	int top;
public:
	Stack(){
		top = 0;
	}
	
	bool isEmpty(){
		if(top == 0){
			return true;
		}
		return false;
	}
	//pushing the ids of HR into the stack
	void push_back(int element){
		if(top == SIZE){
			cout << "FAIL" << endl;
		}else{
			stackArray[top] = element;
			top++;
		}
	}
	
	int pop(int element){
		if(isEmpty()){
			cout << "FAIL" << endl;
		//making sure the element that is being popped matches the input
		}else if(element == stackArray[top-1]){
			top--;
			return stackArray[top+1];
		}else{
			cout << "FAIL" << endl;
			failed = true;
		}
	}
};

int main(int argc, const char * argv[]) {
    int numberOfHROperations;
	
	//asking for number of operations
	cout << "Enter the number of HR operations:" << endl;
	cin >> numberOfHROperations;
	
    //initializing the stack for ids
    Stack ids;
	
    //getting the operations
	cout << "Input the operations and IDs:" << endl;
    for (int i = 0; i < numberOfHROperations; i++){
        char operation;
        int id;
        scanf(" %c%d", &operation, &id);
		
		//checking type of operation to then push or pop
		if(operation == '+'){
			ids.push_back(id);
		}else if(operation == '-'){
			ids.pop(id);
		}else{
			cout << "Enter valid operation" << endl;
		}
    }
	//if nothing went wrong along the way output a PASS
	if(failed == false){
		cout << "PASS";
	}

    return 0;
}
