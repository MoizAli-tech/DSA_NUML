#include <iostream>
#include "Node.h"
using namespace std;
template <class T>
class Queue{

    private:
    Node<T>* front;
    Node<T> * rear;

    public:
    Queue(){
        front = 0;
        rear = 0;
    }

    void enqueue(T element,int priority);
    T dequeue();
    bool isEmpty();
    Node<T>* getFront();
    Node<T>* getRear();


};

template <class T>
void Queue<T>:: enqueue (T element,int priority){
    Node<T> *n = new Node<T>(element,0,priority);
    if(front == 0 && rear ==0){
        front = rear = n;
    }else if(front->getPriority()>n->getPriority()){
        n->setNext(front);
        front = n;
    }
    else {

        Node<T> *ptr = front;
        while(ptr->getNext()!=0 && ptr->getNext()->getPriority()<n->getPriority()){
           ptr = ptr->getNext();
        }

        if(ptr->getNext()==0){
            ptr->setNext(n);
            rear->setNext(n);
            rear = n;
        }else{
            n->setNext(ptr->getNext());
            ptr->setNext(n);
        }
      
    }
}

template <class T>
T Queue<T>:: dequeue (){
    
    if(front == 0 && rear ==0){
       cout<<"nothing to delete"<<endl;
       return 0;
    }else {
        T element = front->getInfo();
        Node<T> *ptr = front;
        front = front->getNext();
        delete ptr;
        return element;

    }
}

template <class T>
bool Queue <T>:: isEmpty(){
    if(front==0 && rear ==0){
        return true;
    }else{
        return false;
    }
}

template <class T>
Node<T>*  Queue <T>:: getFront(){
    if(front==0){
        return NULL;
    }
   return front;
}

template <class T>
Node<T>*  Queue <T>:: getRear(){
    if(rear==0){
        return NULL;
    }
   return rear;
}
