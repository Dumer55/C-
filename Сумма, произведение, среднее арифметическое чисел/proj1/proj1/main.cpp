#include <iostream>



using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b, c;

	cout << "������� 3 �����:" << endl;
	cin >> a >> b >> c;

	cout << "����� ��� ����� = " << a + b + c << endl;

	cout << "������������ ��� ����� = " << a * b * c << endl;

	cout << "������� �������������� 3� ����� = " <<(double)(a + b + c) / 3<< endl;

}