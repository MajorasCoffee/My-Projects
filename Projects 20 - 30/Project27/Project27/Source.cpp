#include <iostream>

using namespace std;

int main()
{
	int var = 0;
	cout << &var << endl; //memory address operator 
	int *varPointer = &var; // pointer 
	cout << varPointer << endl;

	int *a;
	int size;
	cin >> size;
	a = new int[size];
	for (int i = 0; i < size; i++) {
		a[i] = i+1;
		cout << a[i];
	}
	system("PAUSE");
	return 0;
}