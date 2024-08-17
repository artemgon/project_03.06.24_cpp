#include "functions.h"

int arrayMax(int array[], int size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}

float arrayMax(float array[], int size)
{
	float max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}

long arrayMax(long array[], int size)
{
	long max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}



int matrixMax(int matrix[][5], int rows, int cols)
{
	int max = matrix[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] > max)
				max = matrix[i][j];
		}
	}
	return max;
}

float matrixMax(float matrix[][5], int rows, int cols)
{
	float max = matrix[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] > max)
				max = matrix[i][j];
		}
	}
	return max;
}

long matrixMax(long matrix[][5], int rows, int cols)
{
	long max = matrix[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] > max)
				max = matrix[i][j];
		}
	}
	return max;
}



int threeDimArrayMax(int threeDimArray[][5][5], int rows, int cols, int depth)
{
	int max = threeDimArray[0][0][0];
	for (int i = 0; i < depth; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < cols; k++)
			{
				if (threeDimArray[i][j][k] > max)
					max = threeDimArray[i][j][k];
			}
		}
	}
	
	return max;
}

float threeDimArrayMax(float threeDimArray[][5][5], int rows, int cols, int depth)
{
	float max = threeDimArray[0][0][0];
	for (int i = 0; i < depth; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < cols; k++)
			{
				if (threeDimArray[i][j][k] > max)
					max = threeDimArray[i][j][k];
			}
		}
	}

	return max;
}

long threeDimArrayMax(long threeDimArray[][5][5], int rows, int cols, int depth)
{
	long max = threeDimArray[0][0][0];
	for (int i = 0; i < depth; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			for (int k = 0; k < cols; k++)
			{
				if (threeDimArray[i][j][k] > max)
					max = threeDimArray[i][j][k];
			}
		}
	}
	return max;
}



int twoMax(int a, int b)
{
	return (a > b) ? a : b;
}

long twoMax(long a, long b)
{
	return (a > b) ? a : b;
}



int threeMax(int a, int b, int c)
{
	int maximum = twoMax(a, b);
	return (maximum > c) ? maximum : c;
}

long threeMax(long a, long b, long c)
{
	long maximum = twoMax(a, b);
	return (maximum > c) ? maximum : c;
}