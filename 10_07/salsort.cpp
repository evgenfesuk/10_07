#include "stdafx.h"
#include "person.h"
#include "salsort.h"

void salsort(person** p, int n)
{
	int j, k; // переменные для циклов
	for (j = 0; j < n - 1; j++) // внешний цикл
		for (k = j + 1; k < n; k++) // внутренний цикл
			if ((*(p + j))->getSalary() > (*(p + k))->getSalary()) // если первая строка больше второй,
			{
				person* tempptr = *(p + j); // меняем их местами
				*(p + j) = *(p + k);
				*(p + k) = tempptr;
			}
}
