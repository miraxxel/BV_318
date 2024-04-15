#include"Avg.h"
#include"Sum.h"

double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}