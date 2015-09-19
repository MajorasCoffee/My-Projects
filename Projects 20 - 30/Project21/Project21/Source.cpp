#include <iostream>

using namespace std;

void print(int a);
void print(float a);

int main()
{
	float a = 5.6;
	int b = 3;
	print(a);
	print(b);
	system("PAUSE");
	return 0;
}

void print(int a)
{
	cout << "int = "<< a << endl;
}

void print(float a)
{
	cout << "float = " << a << endl;
}

