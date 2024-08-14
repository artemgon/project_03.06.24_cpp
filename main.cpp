#include "functions.h"

int main()
{
	srand(time(NULL));
	const int size = 100;
	int array[size], sum = 0, result, min_sum = 0, index_1 = 0, index_2 = 0;
	for (int i = 0; i < 100; i++)
	{
		array[i] = rand() % 21;
	}
	for (int i = 0; i < 100; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	result = indexFunc(array, size, index_1, min_sum, index_2);
	cout << "\n" << "Result: " << result;
	return 0;
}
