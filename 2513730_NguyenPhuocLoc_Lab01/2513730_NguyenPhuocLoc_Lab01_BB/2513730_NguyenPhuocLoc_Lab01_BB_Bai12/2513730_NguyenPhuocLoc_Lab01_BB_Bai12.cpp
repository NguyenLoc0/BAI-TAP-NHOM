#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	#define pi 3.14159265
	float bankinh, thetich, dientich;

	cout << "Nhap ban kinh hinh cau: "; cin >> bankinh;

	dientich = 4 * pi * bankinh * bankinh;
	thetich = (4 / 3) * pi * bankinh * bankinh * bankinh;

	cout << "\nDien tich hinh cau la: " << dientich << endl;
	cout << "The tich hinh cau la: " << thetich << endl;

	_getch();
}