#include "stdafx.h"
#include "person.h"
#include "salsort.h"

void salsort(person** p, int n)
{
	int j, k; // ���������� ��� ������
	for (j = 0; j < n - 1; j++) // ������� ����
		for (k = j + 1; k < n; k++) // ���������� ����
			if ((*(p + j))->getSalary() > (*(p + k))->getSalary()) // ���� ������ ������ ������ ������,
			{
				person* tempptr = *(p + j); // ������ �� �������
				*(p + j) = *(p + k);
				*(p + k) = tempptr;
			}
}
