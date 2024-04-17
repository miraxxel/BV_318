//Arrays
#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand, int maxRand);
void FillRand(double arr[], const int n, int minRand, int maxRand);
/* % несовместим с шаблонным типом, так что функция не шаблонизируется, во всяком случае с таким форматом рандома
если в minRand и maxRand не ставить шаблонный тип вместо int, то при шаблонизировании, массив перестает быть double 
а ещё, условия заполнения массива, в этой функции отличаются в зависимости от типа */

template<typename T>
void Print(const T arr[], const int n);

template<typename T>
T Sum(const T arr[], const int n);

template<typename T>
double Avg(const T arr[], const int n);

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

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		//Функция rand() генерирует псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	//Заполнение массива случайными числами:
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		arr[i] /= 100;
	}
}

template<typename T>
void Print(const T arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
T Sum(const T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>
double Avg(const T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}