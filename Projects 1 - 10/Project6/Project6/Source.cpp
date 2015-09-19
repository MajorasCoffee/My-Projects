#include <iostream>
#include "TestClass.h"

int main()
{
	TestClass helloWorld1("Dylan");//Call to constructor
	helloWorld1.printName();

	TestClass helloworld2[5];
	for (int i = 0; i < 5; i++) {
		helloworld2[i].printName();
	}
	
	system("PAUSE");
	return 0;
}