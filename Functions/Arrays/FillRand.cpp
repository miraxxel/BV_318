#include"FillRand.h"

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	//���������� ������� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		//arr[i] = 50 + rand() % 50;
		//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767 (RAND_MAX)
		//��� ��������������� ����� ����� ������� �� �����, ��������� � ����������, ��� ������� �������.
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
	//���������� ������� ���������� �������:
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		arr[i] /= 100;
		//arr[i] = 50 + rand() % 50;
		//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767 (RAND_MAX)
		//��� ��������������� ����� ����� ������� �� �����, ��������� � ����������, ��� ������� �������.
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	//���������� ���������� ������� ���������� �������:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}