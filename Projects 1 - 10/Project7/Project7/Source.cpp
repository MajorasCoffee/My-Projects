#include <iostream>
#include <string>

using namespace std;
const int items = 5;

void PrintShop(string shopItems[items]);
void PrintYourCart(int stock[items], string shopItems[items]);
bool Buy(int stock[items]);
int size(int size);
bool test(bool a);

int main()
{
	int stock[items] = { 0,0,0,0,0 };
	string shopItems[items] = {"Apples", "Oranges", "Pears", "Lemons", "Limes"};

	cout << "Welcome\n\n";

	bool shopping = true;

	while (shopping == true)
	{
		PrintShop(shopItems);
		PrintYourCart(stock, shopItems);
		
		shopping = Buy(stock);
	}
	system("PAUSE");
	return 0;
}

void PrintShop(string shopItems[items])
{
	cout << "Items Available For Purchase\n";
	for (int i = 0; i < items; i++) {
		cout << i + 1 << ". " << shopItems[i] << endl;
	}
	cout << "\n";
}

void PrintYourCart(int stock[items], string shopItems[items])
{
	cout << "Your current stock:\n";
	int a = 0;
	for (int i = 0; i < items; i++) {
		if (stock[i] > 0)
		{ 
			a++;
			cout << stock[i] << " x " << shopItems[i] << endl;
		}
	}
	if (a == 0)
	{
		cout << "EMPTY\n";
	}
	cout << "\n";
	
}

bool Buy(int stock[items])
{
	int input;
	cout << "What would you like to purchase " << size(items) - (size(items) - 1) << " - " << (size(items) + 1) <<"? ";
	cin >> input;
	cout << "\n";
	
	if (input == -1)
	{
		cout << "\n\n";
		return false;
	}
	else {
		stock[input - 1]++;
		return true;
	}
}

int size(int size)
{
	int a;
	a = sizeof(size);
	return a;
}



