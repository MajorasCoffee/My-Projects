#include "Names.h"

Names::Names() {
	SetName("Dylan");
}

void Names::SetName(string name) {
	_name = name;
}

string Names::getName()
{
	return _name;
}