#include "stdafx.h"
#include "bsort.h"
#include "person.h"
#include "order.h"

void bsort(person** pp, int n)
{
	
	int j, k; // переменные для циклов
	for (j = 0; j < n - 1; j++) // внешний цикл
		for (k = j + 1; k < n; k++) // внутренний цикл
			order(pp + j, pp + k); // сортируем два элемента
}
