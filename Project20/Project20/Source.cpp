#include <iostream>
#include <string>
using namespace std;

int a = 50;

int main() 
{
	string a = "Hello World ";
	cout << a << ::a << endl;//unary scope resolution operator, used for accessing variables outside your local scope of same name
	system("PAUSE");
	return 0;
} 