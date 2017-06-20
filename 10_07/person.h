#pragma once
#include <string>
#include <iostream>
using namespace std;

class person
{
protected:
	string name; // имя
public:
	void setName(); // установка имени
	void printName(); // показ имени
	string getName(); // получение имени
	person();
	~person();
};

