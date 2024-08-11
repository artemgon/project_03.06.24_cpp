#include "functions.h"

void starsFunction(int number)
{
	if (number > 0) {
		cout << "* ";
		number--;
		starsFunction(number);
	}
	return;
}