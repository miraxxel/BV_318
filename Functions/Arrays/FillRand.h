#pragma once
#include"stdafx.h"

void FillRand(int arr[], const int n, int minRand, int maxRand);
void FillRand(double arr[], const int n, int minRand, int maxRand);
/* % несовместим с шаблонным типом, так что функция не шаблонизируется, во всяком случае с таким форматом рандома
если в minRand и maxRand не ставить шаблонный тип вместо int, то при шаблонизировании, массив перестает быть double
а ещё, условия заполнения массива, в этой функции отличаются в зависимости от типа */