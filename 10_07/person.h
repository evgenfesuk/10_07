#pragma once
#include <string>
#include <iostream>
using namespace std;

class person
{
protected:
	string name; // имя
	float salary; // зарплата
public:
	void setData(); // установка имени
	void printData(); // показ имени
	string getName(); // получение имени
	float getSalary(); // получение зарплаты
	person();
	~person();
};

