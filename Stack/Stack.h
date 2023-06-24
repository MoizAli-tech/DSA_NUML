#include <iostream>
using namespace std;
template <class T>
class Stack 
{
 private:
 int top; //store index number
 int size;
 T *arr;
 //T arr[10];//static array bcz we are declaring array size while coding
 //T *arr=new T(size);//dynamic array 
 public:
 	// 
 	Stack(int size=10)
 	 {  
 	  	this->top=-1;
 	  	this->size=size;
 	  	arr=new T(this->size);
	    
	 }

    bool isEmpty();
    bool isFull();
	T topValue();
    void push(T element);
	T pop();
	

	 
	 
	 
};

template <class T>
T Stack<T>::topValue()
{
	if (top==-1)
	{
		cerr<<"stack is empty\n";
		
	}
	else
	{
		return arr[this->top];
	}
}




template<class T>
T Stack<T>::pop(){
	if (top==-1){
		cerr<<"list is empty\n";
		
		
	}
	else// not empty 
	{
		T element=arr[this->top];
		this->top--;
		return element;
	}
}

template<class T>
void Stack<T>::push(T element)   
{
	if(top==this->size-1)
	{
		cerr<<"Stack Overflow\n";
		
	}
	else
	{
		this->top++;
		arr[this->top]=element;
		
	}
}

template<class T>
bool Stack<T>::isFull()
{

 return this->top==this->size-1;
}



template<class T>
bool Stack<T>::isEmpty(){

return this->top==-1;

}




