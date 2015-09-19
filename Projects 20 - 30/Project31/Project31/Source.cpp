#include <iostream>

using namespace std;

int main() {
	int fish = 5;
	cout << &fish << endl;//Memory address operator '&', gets the memory address of the variable fish

	int *banana;//Pointer operator '*', tells the compiler that this variable will point to a memory address
	banana = &fish;//The variable banana now points to the memory address of fish
	cout << banana << endl;

	system("PAUSE");
	return 0;
}