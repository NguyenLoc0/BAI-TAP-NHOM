#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	int Canh_Da_Giac_Loi;
	cout << "Nhap tong so canh trong da giac loi: "; cin >> Canh_Da_Giac_Loi;

	cout << "Tong so goc la: " << (Canh_Da_Giac_Loi - 2) * 180 << endl << "Tong so duong cheo la: " << (Canh_Da_Giac_Loi * (Canh_Da_Giac_Loi - 3)) / 2 << endl;
	
	_getch();
}