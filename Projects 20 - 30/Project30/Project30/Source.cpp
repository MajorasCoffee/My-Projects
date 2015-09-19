#include <iostream>

using namespace std;

int main() 
{
	int a;
	float b;
	double c;
	string d;
	char e;

	cout << "int = " << sizeof(a) << " bytes" << endl;
	cout << "float = " << sizeof(b) << " bytes" << endl;
	cout << "double = " << sizeof(c) << " bytes" << endl;
	cout << "string = " << sizeof(d) << " bytes" << endl;
	cout << "char = " << sizeof(e) << " bytes" << endl;

	int t[10];
	cout << "There is " << sizeof(t) << " bytes in this array and " << sizeof(t) / sizeof(t[0]) << " elements" << endl;

	system("PAUSE");
	return 0;
}