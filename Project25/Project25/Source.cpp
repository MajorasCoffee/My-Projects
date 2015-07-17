#include <iostream>

using namespace std;
int recursive(int x);

int main() {
	int num;
	cout << "Enter a number you would like the factorial of: ";
	cin >> num;
	cout << recursive(num) << endl;
	system("PAUSE");
	return 0;
}

int recursive(int x) {
	if (x == 1)
	{
		return 1;
	}
	else {
		return x * recursive(x - 1);
	}
}