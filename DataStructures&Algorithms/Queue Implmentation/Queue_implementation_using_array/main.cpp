#include <bits/stdc++.h>

#include"queue.h"

using namespace std;

int main()
{
    Queue <int> q(5);

	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.print();

	q.dequeue();
	q.print();

	cout << q.getFirst() << endl;
	cout << q.getLast() << endl;

	q.enqueue(7);
	q.print();

	q.enqueue(8);
	q.print();

	cout << q.getFirst() << endl;
	cout << q.getLast() << endl;

//Output
//1 2 3 4 5
//2 3 4 5
//2
//5
//2 3 4 5 7
//2 3 4 5 7 8
//2
//8

    return 0;
}
