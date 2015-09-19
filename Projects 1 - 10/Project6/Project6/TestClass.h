#pragma once
#include <string>

using namespace std;

class TestClass
{
public:
	TestClass();//default constructor
	TestClass(string name);//constructor
	void printName();

private:
	string _name;
};

