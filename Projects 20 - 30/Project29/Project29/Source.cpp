#include <iostream>

using namespace std;
void passByReference(int *y);
void passByValue(int x);

int main() {
	int a = 10;
	int b = 20;

	passByValue(a);
	passByReference(&b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("PAUSE");
	return 0;
}

void passByValue(int x) {
	x += 10;
}

void passByReference(int *y) {
	*y += 10;
}