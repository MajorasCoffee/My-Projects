#include<iostream>
#include <random>
#include <ctime>

using namespace std;

int dialogue();
void Fibonacci(int a);


int main()
{
	/*mt19937_64 random(time(NULL));
	uniform_int_distribution<int> roll(1, 10);
	int dice = roll(random);
	cout << dice << endl;*/
	Fibonacci(dialogue());
	system("PAUSE");
	return 0;
}

int dialogue()
{
	int amount;
	cout << "* Fibonacci Sequence *\n\n";
	cout << "Enter how many numbers in sequence: ";
	cin >> amount;
	cout << endl;
	return amount;
}

void Fibonacci(int a)
{
	int first = 0, second = 1, next;
	for (int i = 0; i < a; i++)
	{
		if (i <= 1)
		{
			next = i;
		}
		else {
			next = first + second;
			first = second;
			second = next;
		}

		cout << next;
		if (i < (a - 1))
		{
			cout << ", ";
		}

	}
	cout << endl;
}


