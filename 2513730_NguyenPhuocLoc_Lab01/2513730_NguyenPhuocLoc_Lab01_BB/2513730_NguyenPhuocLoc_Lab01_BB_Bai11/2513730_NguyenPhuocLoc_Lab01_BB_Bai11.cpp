#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	#define pi 3.14159265
	float bankinh, chieucao, Chuviday, Dientichday, Dientichxungquang, Dientichtoanphan, Thetich;

	cout << "Nhap ban kinh hinh tru: "; cin >> bankinh;
	cout << "Nhap chieu cao hinh tru: "; cin >> chieucao;

	Chuviday = 2 * pi * bankinh;
	Dientichday = pi * bankinh * bankinh;
	Dientichxungquang = Chuviday * chieucao;
	Dientichtoanphan = 2 * Dientichday + Dientichxungquang;
	Thetich = Dientichday * chieucao;

	cout << "\nChu vi day hinh tru la: " << Chuviday << endl;
	cout << "Dien tich day hinh tru la: " << Dientichday << endl;
	cout << "Dien tich xung quanh hinh tru la: " << Dientichxungquang << endl;
	cout << "Dien tich toan phan hinh tru la: " << Dientichtoanphan << endl;
	cout << "The tich hinh tru la: " << Thetich << endl;

	_getch();
}