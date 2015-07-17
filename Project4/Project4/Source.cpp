#include <iostream>

using namespace std;

char a = '\n';

class Test{
public:
	int a;
};

int main()
{
	Test firstObject;
	Test secondObject;

	firstObject.a = 5;
	secondObject.a = 10;

	cout << firstObject.a <<a << secondObject.a << a << firstObject.a << a << secondObject.a << a;
	system("PAUSE");
	return 0;
}