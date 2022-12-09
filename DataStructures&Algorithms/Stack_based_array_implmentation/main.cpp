#include <iostream>

#include"stack.h"

using namespace std;

int main()
{
    Stack <int> s;

    s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.push(9);

	s.print();
	cout << s.getSize() << endl;
	cout << "-----------------------------------------------------------------\n";

	cout << s.getTop() << endl;
    s.pop();

	cout << s.getTop()<<endl;
    s.pop();

	cout << s.getTop() << endl;
	s.pop();

	cout << s.getTop() << endl;
	s.pop();

	cout << s.getTop() << endl;
	s.pop();

	cout << s.getTop() << endl;

	cout << "-----------------------------------------------------------------\n";
	s.print();
	cout << s.getSize() << endl;

    return 0;
}
