#include <iostream>
using namespace std;
template <class t>
class ArrayPQ
{
private:
	int priority, size;
	ArrayQueue<t> *arr;

public:
	ArrayPQ(int priority, int size)
	{
		this->priority = priority;
		this->size = size;
		this->arr = new ArrayQueue<t>(priority);
		for (int i = 0; i < priority; i++)
		{
			ArrayQueue<t> n(size);
			arr[i] = n;
		}
	}
	void enqueuePQ(t element, int priority);
	t dequeuePQ();
	bool isEmptyPQ();
	t frontValuePQ(int priority);
	t rearValuePQ(int priority);
};
template <class t>
void ArrayPQ<t>::enqueuePQ(t element, int priority)
{
	for (int i = 0; i < this->priority; i++)
	{
		if (i == priority)
		{
			if (arr[i].isFull())
			{
				cout << "\nThe Seperate Queue For This Priority Is Already Full.\n";
				return;
			}
			else
			{
				arr[i].enqueue(element);
				cout << "\nElement Entered Successfully.\n";
				return;
			}
		}
	}
	cout << "\nEntered Priority Level Is Invalid.\n";
}

template <class t>
t ArrayPQ<t>::dequeuePQ()
{
	for (int i = 0; i < this->priority; i++)
	{
		if (!arr[i].isEmpty())
		{
			return arr[i].dequeue();
		}
	}
	cerr << "\nAll Priority Queues Are Empty.\n";
}
template <class t>
bool ArrayPQ<t>::isEmptyPQ()
{
	for (int i = 0; i < this->priority; i++)
	{
		if (!arr[i].isEmpty())
		{
			return false;
		}
	}
	return true;
}
template <class t>
t ArrayPQ<t>::frontValuePQ(int priority)
{
	if (isEmptyPQ())
		cerr << "\nAll Priority Queues Are Empty.\n";
	else
	{
		for (int i = 0; i < this->priority; i++)
		{
			if (i == priority)
			{
				if (arr[i].isEmpty())
				{
					cerr << "\nThis Priority Queue Is Empty.\n";
				}
				else
					return arr[i].frontValue();
			}
		}
	}
}
template <class t>
t ArrayPQ<t>::rearValuePQ(int priority)
{
	if (isEmptyPQ())
		cerr << "\nAll Priority Queues Are Empty.\n";
	else
	{
		for (int i = 0; i < this->priority; i++)
		{
			if (i == priority)
			{
				if (arr[i].isEmpty())
				{
					cerr << "\nThis Priority Queue Is Empty.\n";
				}
				else
					return arr[i].rearValue();
			}
		}
	}
}