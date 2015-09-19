#include <iostream>
#include <string>

using namespace std;

const int items = 5;
void PrintInventory(int inventory[items], string shopItems[items]);
void PrintShop(string shopItems[items]);
bool Buy(int stock[items]);

int main()
{
	string shopItems[items] = { "apples", "bananas", "cokes", "milks", "eggs" };
	int stock[items] = { 0, 0, 0, 0, 0 };
	bool shopping = true;
	cout << "***Welcome to Da Store***\n" << endl;
	while (shopping == true)
	{
		PrintShop(shopItems);
		PrintInventory(stock, shopItems);
		shopping = Buy(stock);
	}
	system("PAUSE");
	return 0;
}

void PrintInventory(int inventory[items], string shopItems[items])
{
	cout << "Your current stock:\n" << endl;
	int a = 0;
	for (int i = 0; i < items; i++) {
		if (inventory[i] > 0) {
			cout << inventory[i] << " x " << shopItems[i] << endl;
		}
		else {
			a++;
		}
	}
	if (a == items)
	{
		cout << "Empty Cart\n";
	}
	cout << "\n";
}

void PrintShop(string shopItems[items])
{
	cout << "Items available:\n" << endl;
	for (int i = 0; i < items; i++) {
		cout << i+1 << "."<< shopItems[i] << endl;
	}
	cout << "\n";
}

bool Buy(int stock[items])
{
	int input;
	cout << "What would you like to buy? " << 1 << " - " << 5 << ": ";
	cin >> input;
	if (input == -1)
	{
		cout << "\n\n";
		return false;
	}
	else {
		stock[input - 1]++;
		cout << "\n\n";
		return true;
	}
}
