#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a[5] = { 435,3453,546,23523,456 };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		if (sum > 0)
		{
			cout << sum << " + " << a[i] << " = " << sum + a[i] << endl;
		}
		sum += a[i];
		
	}
	cout << endl;
	cout << "Total = " << sum << endl;
	system("PAUSE");
	return 0;
}