#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int var;
	cout << "������� ����� ��� �������� �� ��������: ";
	cin >> var;

	if (var % 2 == 0)
	{
		cout << "����� " << var << " ������" << endl;
	}
	else
	{
		cout << "����� " << var << " ��������" << endl;
	}

}