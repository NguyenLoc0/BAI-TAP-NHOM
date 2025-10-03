#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void main() {
	float a, b, c;

	cout << "Nhap canh a: "; cin >> a;
	cout << "Nhap canh b: "; cin >> b;
	cout << "Nhap canh c: "; cin >> c;

	float Chuvi = (a + b + c);
	float p = Chuvi / 2;
	float Dientich = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << "\nChu vi tam giac la: " << Chuvi << endl;
	cout << "Dien tich tam giac la: " << Dientich << endl;

	_getch();
}