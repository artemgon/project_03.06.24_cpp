#include "functions.h"

int expFunction(int base, int power, int result)
{
	if (power > 1) {
		power--;
		result *= base;
		return expFunction(base, power, result);
	}
	return result;
}
