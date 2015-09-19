#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));
	int a;
	bool won = false;
	int randomNumber = 1 + (rand() % 10);
	cout << "Try guess the number between 1 - 10: ";
	while (!won)
	{
		cin >> a;
		if (a == randomNumber)
		{
			cout << "You guessed the number!" << endl;
			cout << "Play again? Y/N: ";
			char answer ;
			cin >> answer;
			switch (answer) {
			case 'y':
				randomNumber = 1 + (rand() % 10);
				cout << "Enter a number: ";
				break;
			case 'n':
				won = true;
				break;
			default:
				cout << "Try again Y/N: ";
				cin >> answer;
			}
		}
		else if (a < randomNumber)
		{
			cout << "A little higher" << endl;
		}
		else if (a > randomNumber)
		{
			cout << "A little lower" << endl;
		}
	}
	
	system("PAUSE");
	return 0;
}