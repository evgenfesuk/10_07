#pragma once
#include <string>
#include <iostream>
using namespace std;

class person
{
protected:
	string name; // ���
	float salary; // ��������
public:
	void setData(); // ��������� �����
	void printData(); // ����� �����
	string getName(); // ��������� �����
	float getSalary(); // ��������� ��������
	person();
	~person();
};

