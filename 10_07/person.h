#pragma once

using namespace std;

class person
{
protected:
	string name; // ���
public:
	void setName() // ��������� �����
	{
		cout << "������� ���: "; cin >> name;
	}
	void printName() // ����� �����
	{
		cout << endl << name;
	}
	string getName() // ��������� �����
	{
		return name;
	}
	person();
	~person();
};

