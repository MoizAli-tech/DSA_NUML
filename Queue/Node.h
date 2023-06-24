#include<iostream>
using namespace std;
template <class T>
class Node{
    public:
    T info;
    int priority;
    Node *next;
    

    public:
    Node( T info,Node* next,int priority){
        this->info = info;
        this->next = next;
        this->priority = priority;
    }

    
    void setInfo(T info){
        this->info = info;
    }

        
    void setNext(Node *next){
        this->next = next;
    }

    T getInfo(){
        return this->info;
    }

    Node* getNext(){
        return this->next;
    }

    void setPriority(int prio){
        priority = prio;
    }

    int getPriority(){
        return priority;
    }
};


