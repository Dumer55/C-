#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int symbolCount;
	char sybol;
	int lineType;
	int index = 0;

	cout << "������� ���������� �������� � �����" << endl;
	cin >> symbolCount;

	cout << "������ ������" << endl;
	cin >> sybol;

	cout << "�������� ��� �����:" << endl
		<< "1 - ������������ �����" << endl
		<< "2 - �������������� �����" << endl;

	cin >> lineType;

	if (lineType != 1 && lineType != 2)
	{
		cout << "�� ���������� ��� �����!" << endl;
		return;
	}

	while (index < symbolCount)
	{
		if (lineType == 1)
		{
			cout << sybol << endl;
		}

		if (lineType == 2)
		{
			cout << sybol;
		}

		index++;
	}

	cout << endl << endl;
}