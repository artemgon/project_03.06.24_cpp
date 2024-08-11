#include "lib.h" 

template <class T>
T sumFunc(T a, T b, T sum)
{
	if (b >= a) {
		sum += a;
		a++;
		return sumFunc(a, b, sum);
	}
	return sum;
}