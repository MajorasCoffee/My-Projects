#include "Board.h"

Board::Board(char a, char b) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((j % 2) == 0) {
				_symbols[i][j] = a;
			}
			else {
				_symbols[i][j] = b;
			}
		}
	}
}

void Board::DrawBoard() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << _symbols[i][j];
		}
		cout << endl;
	}

}