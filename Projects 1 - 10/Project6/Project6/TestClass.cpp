#include "TestClass.h"
#include <iostream>

TestClass::TestClass(string name)//this function belongs to TestClass.h
{
	_name = name;
}

TestClass::TestClass()
{
	_name = "noname";
}

void TestClass::printName()
{
	cout << "Player name: " << _name << endl;
}