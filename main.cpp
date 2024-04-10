

#include"LinkedList.h"


int main() {
	LinkedList<char> l;
	l.push('h');
	l.push('o');
	l.push('l');
	l.push('l');
	l.push('o');
	cout << l.getVal(2) << l.getVal(3) << endl;
	cout << l.isEmpty() << endl;

	return 0;
}