#include <iostream>
using namespace std;
#include "Node.h"
template <class T>
class DBLL
{   private:
    Node<T> *head;
    Node<T> *tail;

    public:
    DBLL()
    {
        head = 0;
        tail = 0;
    }
  

    

    void addAfterGivenElement(T element,T newE);
    void addBeforeGivenElement(T element,T newE);
    void addToTail(T element);
    void addToHead(T element);
    void traverse();
    void reverseTraversing();

  
     
};

template<class T>
void DBLL<T>::addToHead(T newE)
    {
        Node<T> *n = new Node<T>(0,newE, 0);
        if (head == 0)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->setNext(head);
            head->setPrev(n);
            head = n;
        }
    }

template<class T>
void DBLL<T>:: traverse()
{
        Node<T> *ptr = head;

        while (ptr != 0)
        {
            cout<<ptr->getInfo()<<endl;
            ptr = ptr->getNext();
        }
}

template<class T>
void DBLL<T>:: reverseTraversing()
{
        Node<T> *ptr = tail;

        while (ptr != 0)
        {
            cout<<ptr->getInfo()<<endl;
            ptr = ptr->getPrev();
        }
}



template<class T>
void DBLL<T> :: addAfterGivenElement(T element,T newE){
    Node<T> *n  = new Node<T>(0,newE,0);

    if(head ==0){
        cout<<"list is empty";
    }else if(head->getInfo() == element){
        n->setPrev(head);
        n->setNext(head->getNext());
        head->getNext()->setPrev(n);
        head->setNext(n);        

    }else if(tail->getInfo() == element){
    n->setPrev(tail);
    tail->setNext(n);
    tail=n;
    }
    else{
        Node<T> *ptr = head;
        while(ptr->getInfo() != element && ptr !=0){
            ptr = ptr->getNext();
        }
        if(ptr==0) {
            cout<<"element not found";
        }else{
            n->setPrev(ptr);
            n->setNext(ptr->getNext());
            ptr->getNext()->setPrev(n);
            ptr->setNext(n);
        }
    }
  
    
}


template<class T>
void DBLL<T> :: addBeforeGivenElement(T element, T newE){
    if(head ==0){
        cout<<"list is empty";
        return;
    }
    Node<T> *n = new Node<T> (0,newE,0);

    if(element  == head->getInfo()){
        n->setNext(head);
        head->setPrev(n);
        head=n;
        tail = n;
        return;
    }
    
    Node<T> *ptr = head;
    while(ptr->getInfo() != element && ptr !=0){
        ptr= ptr->getNext();
    }

    if(ptr ==0){
        cout<<"element is not there";
    }else{
        n->setNext(ptr);
        n->setPrev(ptr->getPrev());
        ptr->getPrev()->setNext(n);
        ptr->setPrev(n);
    }

}

template<class T>
void DBLL<T> :: addToTail(T element){
    Node<T> *n = new Node<T>(0,element ,0);
    if(head ==0 && tail ==0){
        head=n;
        tail =n;
    }else{
        tail->setNext(n);
        n->setPrev(tail);
        tail = n;
    }
}

