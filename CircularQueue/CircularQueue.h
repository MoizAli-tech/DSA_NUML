#include <iostream>
using namespace std;


template <class T>

class CircularQueue{
    private:
    int front;
    int rear;
    int size;
    T *arr;

    public:
    CircularQueue(int size = 5){
        arr = new T(size);
        front = rear = -1;
    }


    void enqueue(T element);
	T dequeue();
	bool isEmpty();
	bool isFull();
	T frontValue();
	T rearValue();
    void traversel (){
        for(int i=0;i<size-1;i++){
            cout<<arr[i]<<endl;
        }
    }


};

template <class T>
void CircularQueue<T>:: enqueue(T element){

    if((front==0 && rear == size-1) || rear+1 == front){
        cout<<"queue is full "<<endl;
    }else if(front ==-1 && rear==-1){
        front++;
        rear++;
        arr[rear] = element;
    }else if(rear=size-1 && front>0){
        rear = 0;
        arr[rear] = element;
    }else{
        rear++;
        arr[rear] = element;
    }
}

// template <class T>
// T CircularQueue<T>:: dequeue( ){
//     T element;
//    if(front ==-1 && rear==-1){
//         cout<<"nothing in queue"<<endl;
//     }
//     else if(rear==front){
//         T element = arr[front];
       
//         rear=-1;
//         front=-1;
//         return element;
      
//     }else if(front=size-1 && front>rear){
        
//         element = arr[front];
//         front =0;
//         return element;
//     }
    
//     else{
//         element = arr[front];
//         front++;
  
//         return element;
//     }
// }


template<class T>
T CircularQueue<T>::dequeue()
{
	if(rear==-1 && front==-1)
	{
		cout<<"Nothing to delete \n";
        return NULL;
	}
	else if(rear==front)//only one element
	{
		T element=arr[front];
		rear=front=-1;
		return element;
	}
	else if(front==size-1 && front>rear)//refilled
	{
		T element=arr[front];
		front=0;
		return element;
	}
	else
	{
		T element=arr[front];
		front++;
		return element;
	}
}//dequeue
