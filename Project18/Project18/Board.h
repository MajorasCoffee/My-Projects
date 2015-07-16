#pragma once

#include <iostream>
#include <string>

using namespace std;
const int n = 4;

class Board {
public:
	Board(char a, char b);
	void DrawBoard();
private:
	char _symbols[n][n];
};