#pragma once
#include <string>
#include <iostream>
using namespace std;

class person
{
protected:
	string name; // ���
public:
	void setName(); // ��������� �����
	void printName(); // ����� �����
	string getName(); // ��������� �����
	person();
	~person();
};

