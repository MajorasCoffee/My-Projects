#include "Board.h"

Board::Board()
{
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++) {
			if ((j % 2) == 0) {
				_a[i][j] = ":";
			}
			else {
				_a[i][j] = "D ";
			}
		}
	}
}

void Board::Draw()
{
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			cout << _a[i][j];
		}
		cout << endl;
	}
}
