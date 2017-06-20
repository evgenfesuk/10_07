#pragma once

using namespace std;

class person
{
protected:
	string name; // имя
public:
	void setName() // установка имени
	{
		cout << "Введите имя: "; cin >> name;
	}
	void printName() // показ имени
	{
		cout << endl << name;
	}
	string getName() // получение имени
	{
		return name;
	}
	person();
	~person();
};

