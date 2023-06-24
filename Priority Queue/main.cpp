#include <iostream>
#include "ArrPQueue.h"
using namespace std;
int main(int argc, char **argv)
{
	cout << "\nEnter Size Of Each Seperate Queue :";
	int size;
	cin >> size;
	cout << "\nEnter Levels Of Priority :";
	int priority;
	cin >> priority;
	ArrayPQ<int> Q(priority, size);
	do
	{
		int n;
		cout << "______________________________";
		cout << "\nEnter 1 To Enqueue.";
		cout << "\nEnter 2 To Dequeue.";
		cout << "\nEnter 3 To Get Front Value Of a Seperate Queue.";
		cout << "\nEnter 4 To Get Rear Value Of a Seperate Queue.";
		cout << "\nEnter 0 To Exit.\n";
		cout << "______________________________\n";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "\nEnter Element To Enter :";
			int a;
			cin >> a;
			cout << "\nEnter Prioriry (Only Valid Level Accepted From 0-" << priority - 1 << ") :";
			int b;
			cin >> b;
			Q.enqueuePQ(a, b);
			break;
		case 2:
			cout << "\nRemoved Element = " << Q.dequeuePQ() << "\n";
			break;
		case 3:
			cout << "\nEnter Priority Level (Queue Number) :";
			int c;
			cin >> c;
			cout << "Front Value :" << Q.frontValuePQ(c) <<endl;
			break;
		case 4:
			cout << "\nEnter Priority Level (Queue Number) :";
			int d;
			cin >> d;
			cout << "Rear Value :" << Q.rearValuePQ(d) <<endl;
			break;
		case 0:
			exit(0);
		}
	} while (true);
	return 0;
}