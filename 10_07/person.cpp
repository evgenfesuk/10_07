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

void person::printName()
{
	cout << endl << name;
}

void person::setName()
{
	cout << "¬ведите им€: "; 
	cin >> name;
}
