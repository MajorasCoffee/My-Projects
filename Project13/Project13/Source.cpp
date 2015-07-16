#include <iostream>
using namespace std;
void a();
void b();
void c();
void d();

int main()
{
	//a();
	//b();
	//c();
	//d();
	system("PAUSE");
	return 0;
}

void a() {
	int numbers[5];
	int answer = 0;
	for (int i = 0; i < 5; i++) {
		cin >> numbers[i];
		answer += numbers[i];
	}
	cout << answer << endl;
}

void b() {
	int number = 0;
	int answer = 0;
	for (int i = 0; i < 5; i++) {
		cin >> number;
		answer = answer += number;
	}
	cout << answer << endl;
}

void c() {
	int loop = 0;
	int answer = 0;
	int numbers[5];
	while (loop < 5)
	{
		cin >> numbers[loop];
		answer += numbers[loop];
		loop++;
	}
	cout << answer;
}

void d() {
	int loop = 0;
	int answer = 0;
	int number = 0;
	while (loop < 5)
	{
		cin >> number;
		answer = answer += number;
		loop++;
	}
	cout << answer;
}

void f() {
	int loop = 0;
	int answer = 0;
	int number = 0;
	do {
		cin >> number;
		answer = answer += number;
		loop++;
	} while (loop < 5);
	cout << answer;
}

void g() {
	int loop = 0;
	int answer = 0;
	int numbers[5];
	do {
		cin >> numbers[loop];
		answer += numbers[loop];
		loop++;
	} while (loop < 5);
	cout << answer;
}