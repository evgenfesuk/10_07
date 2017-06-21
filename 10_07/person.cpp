#include "stdafx.h"
#include "person.h"
#include <string>
#include <iostream>


person::person()
{
}


person::~person()
{
}

string person::getName()
{
	return name;
}

float person::getSalary()
{
	return salary;
}

void person::printData()
{
	cout << endl << name << ", зарплата = " << salary << endl;
}

void person::setData()
{
	cout << "Введите имя: "; 
	cin >> name;
	cout << "Введите зарплату: ";
	cin >> salary;
}
