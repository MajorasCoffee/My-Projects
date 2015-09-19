#include "Names.h"

using namespace std;

Names::Names()
{
	_name = "NONAME";
	intro();
}

void Names::setName(string newName) {
	_name = newName;
}

string Names::getName() {
	return _name;
}

void Names::intro() {
	cout << "Your name is " << _name << endl;
}

