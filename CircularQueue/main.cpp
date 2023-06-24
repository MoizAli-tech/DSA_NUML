#include <iostream>
#include "CircularQueue.h"
using namespace std;


int main(){
    CircularQueue<int> Q1;

    Q1.enqueue(2);
    Q1.enqueue(3);
    Q1.enqueue(4);
    Q1.enqueue(5);
    Q1.traversel();
    // cout<<Q1.dequeue();
    // cout<<Q1.dequeue();
    

    return 0;
}