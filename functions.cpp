#include "functions.h"

int indexFunc(int array[], int size, int index_1, int min_sum, int index_2)
{
	int sum = 0;
	if (index_1 <= 90)
	{
		for (int i = index_1; i <= index_1 + 9; i++)
		{
			sum += array[i];
		}
		if (index_1 == 0)
		{
			min_sum = sum;
		}
		if (sum < min_sum)
		{
			min_sum = sum;
			index_2 = index_1;
		}
		index_1++;
		return indexFunc(array, size, index_1, min_sum, index_2);
	}
	if (index_1 > 90)
	{
		return index_2;
	}
}

