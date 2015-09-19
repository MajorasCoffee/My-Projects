#include <iostream>
using namespace std;
void a(int age);

int main() {
	int age;
	cout << "What age are you? ";
	cin >> age;

	a(age);
	system("PAUSE");
	return 0;
}

void a(int age)
{
	switch (age) {
	case 21:
		cout << "You can now legally gamble!" << endl;
		break;
	case 18:
		cout << "You can at least drink now!" << endl;
		break;
	default:
		cout << "Sorry, you're too young" << endl;
	}
}

