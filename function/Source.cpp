#include<iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);

void main()
{
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Sum: " << Sum(arr, n) << endl;
	cout << "Avg: " << Avg(arr, n) << endl;
	cout << "MinValueIn: " << MinValueIn(arr, n) << endl;
	cout << "MaxValueIn: " << MaxValueIn(arr, n) << endl;

	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	Sort(brr, m);
	Print(brr, m);
	cout << "Sum: " << Sum(brr, m) << endl;
	cout << "Avg: " << Avg(brr, m) << endl;
	cout << "MinValueIn: " << MinValueIn(brr, m) << endl;
	cout << "MaxValueIn: " << MaxValueIn(brr, m) << endl;


	int A[ROWS][COLS];
	FillRand(A, ROWS, COLS);
	Print(A, ROWS, COLS);
	Sort(A, ROWS, COLS);
	Print(A, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}


void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
				if (k == i)
				{
					l = j + 1;
				}
				else
				{
					l = 0;
				}
				for (; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "Number of iterations: " << iterations << endl;
}

int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

double Sum(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}


double Avg(int arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}


int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}


int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}