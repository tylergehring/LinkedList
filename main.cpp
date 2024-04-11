

#include"LinkedList.h"


int main() {
	LinkedList<char> l;
	l.push('h');
	l.push('e');
	l.push('l');
	l.push('l');
	l.push('o');
	l.assign(3, 't');
	for (int i = 0; i < l.getSize(); i++) {
		cout << l.getVal(i) << endl;
	}
	cout << l.isEmpty() << endl;

	return 0;
}