#include "stdafx.h"
#include "bsort.h"
#include "person.h"
#include "order.h"

void bsort(person** pp, int n)
{
	
	int j, k; // ���������� ��� ������
	for (j = 0; j < n - 1; j++) // ������� ����
		for (k = j + 1; k < n; k++) // ���������� ����
			order(pp + j, pp + k); // ��������� ��� ��������
}
