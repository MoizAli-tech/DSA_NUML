#include<iostream>
using namespace std;
template  <class T>
class Node{
    private:
    T info;
    Node<T> *next;
    Node<T> *prev;

    public:
    Node( Node<T> *prev,T info,Node<T> *next){
        this->info = info;
        this->next = next;
        this->prev = prev;
    }

    
    void setInfo(T info){
        this->info = info;
    }

        
    void setNext(Node<T> *next){
        this->next = next;
    }

    void setPrev(Node<T> *prev){
        this->prev = prev;
    }

    T getInfo(){
        return this->info;
    }

    Node<T>* getNext(){
        return this->next;
    }

    Node<T>* getPrev(){
        return this->prev;
    }
};


