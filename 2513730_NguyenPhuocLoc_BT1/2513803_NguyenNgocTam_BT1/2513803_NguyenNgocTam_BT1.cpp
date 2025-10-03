//Khai bao thu vien
#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	//Khai bao hang so va bien
	#define pi 3.14159265
	float r;

	//du lieu dau vao
	cout << "Nhap ban kinh r = "; cin >> r;

	//xu ly va xuat ket qua
	cout << "\nDien tich hinh tron S = " << pi * r * r << endl;
	cout << "Chu vi hinh tron C = " << 2 * pi * r << endl;

	_getch();
}