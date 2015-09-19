#include <iostream>
#include <string>
using namespace std;

class MyClass {
public:
	void SetName(string name) {
		myName = name;
	}

	string getName() {
		return myName;
	}
private:
	string myName;

};


int main() {
	MyClass name;
	MyClass name1;

	name.SetName("Dylan");
	cout << "My name is " << name.getName() << endl;

	name1.SetName("Bob");
	cout << name1.getName() << endl;

	name.SetName("Dylan");
	cout << "My name is " << name.getName() << endl;

	system("PAUSE");
	return 0;
}

