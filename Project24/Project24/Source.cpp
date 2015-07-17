#include <iostream>

using namespace std;

int main() {

	//int mDA[2][3] = { {2,6,9},{4,7,3}};
	int mDA[3][3] = { {1,2,3 }, {4,5,6}, {7,8,9} };
	/*

	//2,6,9	 -- Rows
	//4,7,3

	   ¦
	 Columns

	*/
	//cout << mDA[0][2] << endl; // I want 9 so I say 0 for the first row, then 2 for the second row. Arrays start from 0

	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 3; column++) 
		{
			cout << mDA[row][column] << " ";
		}
		cout << endl;
		
	}

	system("PAUSE");
	return 0;

}