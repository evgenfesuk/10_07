#include "stdafx.h"
#include "order.h"
#include "person.h"


void order(person** pp1, person** pp2)
{
	if ((*pp1)->getName() >(*pp2)->getName()) // ���� ������ ������ ������ ������,
	{
		person* tempptr = *pp1; // ������ �� �������
		*pp1 = *pp2;
		*pp2 = tempptr;
	}
}
