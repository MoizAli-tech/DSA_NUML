#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue<int> Q1;

    Q1.enqueue(0,10);
    Q1.enqueue(1,2);
     Q1.enqueue(2,9);
     Q1.enqueue(3,7);
     Q1.enqueue(4,1);

    while (!Q1.isEmpty())
    {
        cout << Q1.dequeue();
    }


    return 0;
};