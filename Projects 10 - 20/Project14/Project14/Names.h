#pragma once
#include <iostream>
#include <string>

using namespace std;


class Names {
public:
	Names();
	void SetName(string name);
	string getName();
private:
	string _name;
};
