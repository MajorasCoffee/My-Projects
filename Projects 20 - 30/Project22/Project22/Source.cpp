#include <iostream>

using namespace std;
int fact(int x);

int main()
{
	cout << "What would you like the factorial of? ";
	int num;
	cin >> num;
	cout << "Factorial of " << num << " is: " << fact(num) << endl;
	system("PAUSE");
	return 0;
}

int fact(int x)
{
	if (x == 1)
		return 1; // Base case
	else
		return fact(x - 1) * x; //Recursive case
}

/*
-------------------------

Check folder if unsure to check images/examples
So say you pass 3 as the argument, it creates a stack of 3

-------------------------

x = 3

int fact(int x) {
if (x == 1){
	return 1;
}else{
	return fact(x - 1) * x;
}

-------------------------

so...

Stack Part 1:	return fact(3 - 1 = 2) pending * 3
return fact() now clones itself with 'X' now equal to '2' so x = 2

Stack Part 2:	return fact(2 - 1 = 1) pending * 2
return fact() is now equal to '1' so x = 1

Remember...

if (x == 1){
return 1;
}

So...

Stack Part 2:	return 1 * 2	Which equals = 2
Stack Part 1:	return 2 * 3	Which equals = 6

Or in plain English, Stack Part 2 which had a pending multiplication of 2 now has a value
of 1 so 1 times 2 equals 2.

2 is returned to Stack Part 1 which had a pending multiplication of 3 now has a value of 2
so 2 times 3 equals 6

Answer is: 6

-------------------------
*/