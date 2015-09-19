#pragma once
#include <string>
#include <iostream>
using namespace std;

const int s = 8;


class Board
{
public:
	Board();
	void Draw();
private:
	string _a[s][s];
};

