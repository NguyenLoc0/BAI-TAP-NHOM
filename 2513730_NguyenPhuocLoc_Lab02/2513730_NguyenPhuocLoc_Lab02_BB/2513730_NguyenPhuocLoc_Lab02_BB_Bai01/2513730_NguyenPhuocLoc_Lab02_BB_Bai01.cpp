#include <iostream>
#include <conio.h>
#define PI 3.14159265
using namespace std;

float tinhDienTichHinhTron(float bankinh)
{
	return PI * bankinh * bankinh;
}

float tinhChuViHinhTron(float bankinh)
{
	return 2 * PI * bankinh;
}

void main()
{
	float bankinh;
	cout << "Nhap ban kinh hinh tron: "; cin >> bankinh;

	cout << "\nDien tich hinh tron la: " << tinhDienTichHinhTron(bankinh) << endl;
	cout << "Chu vi hinh tron la: " << tinhChuViHinhTron(bankinh) << endl;

	_getch();
}
