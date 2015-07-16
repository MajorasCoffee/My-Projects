#include <iostream>
#include<string>
#include "Names.h"

using namespace std;

int main()
{
	Names name;
	name.setName("Dylan");
	cout << "Your new name is " << name.getName() << endl;

	system("PAUSE");
	return 0;
}