// Lab_03_4.cpp
// ����� ������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 2

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x; //������� ��������
	double y; //������� ��������
	double R; //������� ��������

	cout << " x= "; cin >> x;
	cout << " y= "; cin >> y;
	cout << " R= "; cin >> R;

	//������������ � ����� ����

	if ((y <= sqrt((R * R) - (x * x)) && y >= 0 && x <= 0) ||
		y <= 0 && y >= (-R / (R / 2)) * x && y >= -R + ((R / (R / (R - 2))) * (x - (R / 2))))
		cout << "���" << endl;
	else
		cout << "ͳ" << endl;

	cin.get();
	return 0;

}