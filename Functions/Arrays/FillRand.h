#pragma once // не зависимо от того, сколько раз с этим файлом было написано include, он встроиться в программу только один раз
#include"Constants.h"
#include"stdafx.h" 

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
