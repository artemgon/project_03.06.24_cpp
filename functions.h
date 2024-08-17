#include "lib.h" 

template <typename T>
void arrayPrint(T array[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	return;
}

template <typename T>
void matrixPrint(T matrix[][5], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return;
}

int arrayMax(int array[], int size);

float arrayMax(float array[], int size);

long arrayMax(long array[], int size);



int matrixMax(int matrix[][5], int rows, int cols);

float matrixMax(float matrix[][5], int rows, int cols);

long matrixMax(long matrix[][5], int rows, int cols);


int threeDimArrayMax(int threeDimArray[][5][5], int rows, int cols, int depth);

float threeDimArrayMax(float threeDimArray[][5][5], int rows, int cols, int depth);

long threeDimArrayMax(long threeDimArray[][5][5], int rows, int cols, int depth);


int twoMax(int a, int b);

long twoMax(long a, long b);

int threeMax(int a, int b, int c);

long threeMax(long a, long b, long c);