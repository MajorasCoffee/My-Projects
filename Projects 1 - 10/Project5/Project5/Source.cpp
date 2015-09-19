#include <iostream>
#include <string>

using namespace std;

class CheckerBoard {
public:
	void initBoard() {
		for (int y = 0; y < 8; y++) {
			for (int x = 0; x < 8; x++) {
				if (((x + y) % 2) == 0) 
				{
					board[y][x] = '.';
				}
				else 
				{
					board[y][x] = '*';
				}
			}
		}
	}

	void printBoard() {
		for (int y = 0; y < 8; y++) {
			for (int x = 0; x < 8; x++) {
				cout << board[y][x];
			}
			cout << endl;
		}
	}

private:
	char board[8][8];
};

int main()
{
	CheckerBoard checkerBoard; 
	checkerBoard.initBoard(); 
	checkerBoard.printBoard();

	system("PAUSE");
	return 0;
}

//Modulo Division and X's and O board drawing
//Multi Dimentional Array Explanation located in folder

//int a = 3;
//int b = 6;
//cout << a % b << endl; // 3 divided by 6 = 0 so there's a remainder of 3 // Modulo division

//void initBoard() {
//	for (int y = 0; y < 3; y++) {
//		for (int x = 0; x < 5; x++) {
//			if (y < 2)
//			{
//				if ((x % 2) == 0) {
//					board[y][x] = '_';
//				}
//				else {
//					board[y][x] = '|';
//				}
//			}
//			else {
//				if ((x % 2) == 0) {
//					board[y][x] = ' ';
//				}
//				else {
//					board[y][x] = '|';
//				}
//			}
//		}
//	}
//}
//
//void printBoard() {
//	for (int y = 0; y < 3; y++) {
//		for (int x = 0; x < 5; x++) {
//			cout << board[y][x];
//		}
//		cout << endl;
//	}
//}
//
//private:
//	char board[3][5];
//};