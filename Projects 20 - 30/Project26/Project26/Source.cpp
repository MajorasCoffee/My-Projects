#include "Factorial.h"
#include <iostream>

using namespace std;

int main() {
	Factorial fact;
	int x;
	cout << "Enter the number you want the factorial of: ";
	cin >> x;
	cout << fact.getFactorial(x) << endl;
	system("PAUSE");
	return 0;
}