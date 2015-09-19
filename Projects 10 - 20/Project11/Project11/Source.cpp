#include <iostream>
#include <string>

using namespace std;

class Names{
public:
	Names(string n)//constructor
	{
		setName(n);
	}

	void setName(string newName) 
	{
		_name = newName;
	}

	string getName()
	{
		return _name;
	}
private:
	string _name;
};

int main()
{
	Names name1("NONAME");//object
	cout << name1.getName() << endl;
	cout << "What is your name? ";

	string name;
	cin >> name;
	name1.setName(name);
	cout << "Your name is " << name1.getName() << endl;

	system("PAUSE");
	return 0;
}