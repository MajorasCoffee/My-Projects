#include <iostream>

using namespace std;

int volume(int l = 0, int w = 0, int h = 0);//Default parameters

int main()
{
	cout << volume() << endl;
	system("PAUSE");
	return 0;
}

int volume(int l, int w, int h) {
	return l*w*h;
}