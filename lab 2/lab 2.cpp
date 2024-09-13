// Lab_02.cpp
// < Синчук Іван >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 14
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	//double z2; // результат обчислення 2-го виразу
	//cout << "x = "; cin >> x;
	z1 = (cos(x) + sin(x)) / (cos(x) - sin(x));
	//z2 = tan(2*x) + (1 / (cos(2*x));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}