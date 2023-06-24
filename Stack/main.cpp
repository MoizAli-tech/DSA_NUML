#include <iostream>
#include "Stack.h"
using namespace std;
void decimaltobinary(int number);
string reverseString(string input);


int main() {
    string input;
	int choice,number;
	
   
	do{
	
	cout<<"press 1 to reverse the string \n";
	cout<<"press 2 to convert decimal to binary \n";
	cout<<"press 0 to exit the code \n";
	cin>>choice;

	switch(choice){
		case 1:
			cout<<"provide a string to reverse\n";
			cin>>input;
			cout<<reverseString(input)<<endl;
	        break;
	        case 2:
			cout<<"provide a decimal number to convert to binary\n";
			cin>>number;
			decimaltobinary(number);
			cout<<endl;
	        break;
	    case 0:
	    	exit(-1);
    }
        
    }while(true);
	return -1;
}
	

	

void decimaltobinary(int num)
{
    Stack<int> stack;
    while(num !=0){
    	int rem = num % 2;
    	stack.push(rem);
    	num=num/2;
	
	}
	while (!stack.isEmpty())
	{
		cout<<stack.pop();
		}	
}


string reverseString(string strArray)
	{
	Stack<char>stack(strArray.length());
	string result="";
	for(int i=0;i<strArray.length();i++)
	{
		stack.push(strArray[i]);
	}
	while (!stack.isEmpty())
	{
		result+=stack.pop();
		
	}
	return result;
}