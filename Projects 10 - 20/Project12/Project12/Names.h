#pragma once
#include <iostream>
#include <string>

using namespace std;

class Names
{
public:
	Names();
	void setName(string newName);
	string getName();
	void intro();
private:
	string _name;
};

