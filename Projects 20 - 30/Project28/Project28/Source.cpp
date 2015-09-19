#include <iostream>

using namespace std;

void PassByValue(int x);
void PassByReference(int *x);

int main()
{
	int a = 10;
	int b = 10;

	PassByValue(a);
	PassByReference(&b);//You need to pass the memory address of b instead of just the integer

	cout << a << endl;
	cout << b << endl;

	system("PAUSE");
	return 0;
}

void PassByValue(int x)//When passed a variable, it just makes a copy of it, it doesn't directly modify the value it was passed
{
	x = 50;//The value it was passed now equals 50 inside this function, nowhere else
}

void PassByReference(int *passedMemoryAddress) //pointer needs the memory address of the integer you pass it
{
	*passedMemoryAddress = 100;//The variable in that memory address now equals 100
}