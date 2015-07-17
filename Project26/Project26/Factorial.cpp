#include "Factorial.h"

int Factorial::getFactorial(int x) {
	if (x == 1) {
		return 1;
	}
	else {
		return x * getFactorial(x - 1);
	}
}