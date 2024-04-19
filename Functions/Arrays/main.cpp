//Arrays
#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Functions.h"
#include"Functions.cpp"

void main()
{
	setlocale(LC_ALL, "");

	const int SIZE = 10;
	int arr[SIZE];

	/*int minRand, maxRand;
	do
	{
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы диапазона не должны совпадать" << endl;
	} while (minRand == maxRand);*/

	FillRand(arr, SIZE, 0, 20);
	Print(arr, SIZE);
	cout << "Сумма элементов массива: " << Sum(arr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, SIZE) << endl;

	double d_arr[SIZE];

	FillRand(d_arr, SIZE, 0.0, 20.0);
	Print(d_arr, SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, SIZE) << endl;
}
