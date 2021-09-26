// Lab_03_4.cpp
// Борща Тараса
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 2

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x; //Вхідний параметр
	double y; //вхідний аргумент
	double R; //вхідний параметр

	cout << " x= "; cin >> x;
	cout << " y= "; cin >> y;
	cout << " R= "; cin >> R;

	//Розгалуження в повній формі

	if ((y <= sqrt((R * R) - (x * x)) && y >= 0 && x <= 0) ||
		y <= 0 && y >= (-R / (R / 2)) * x && y >= -R + ((R / (R / (R - 2))) * (x - (R / 2))))
		cout << "Так" << endl;
	else
		cout << "Ні" << endl;

	cin.get();
	return 0;

}