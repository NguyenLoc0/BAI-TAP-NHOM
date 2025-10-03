#include <iostream>
#include <conio.h>
#define pi 3.14159265
using namespace std;

float DientichHinhCau(float bankinh)
{
	return 4 * pi * bankinh * bankinh;
}
float ThetichHinhCau(float bankinh)
{
	return (4.0f / 3) * pi * bankinh * bankinh * bankinh;
}
void main()
{
	float bankinh;

	cout << "Nhap ban kinh hinh cau: "; cin >> bankinh;

	cout << "\nDien tich hinh cau la: " << DientichHinhCau(bankinh) << endl;
	cout << "The tich hinh cau la: " << ThetichHinhCau(bankinh) << endl;

	_getch();
}