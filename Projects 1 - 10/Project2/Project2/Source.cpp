#include <iostream>
#include <string>

using namespace std;

class Test{
public:
	void sayHello() {
		cout << "Hello World!\n";
	}

	////setter function
	//void setName(string name) {
	//	_name = name;
	//}

	//Setter_getter function
	string setReturn(string name) {
		_name = name;
		return _name;
	}

	////getter function
	//string getName() {
	//	return _name;
	//}

private:
	string _name;
};

int main()
{
	Test object;

	object.sayHello();
	//object.setName("My name is Dylan");
	cout << object.setReturn("My name is Dylan") << endl;
	//cout << object.getName() <<endl;


	system("PAUSE");
	return 0;
}