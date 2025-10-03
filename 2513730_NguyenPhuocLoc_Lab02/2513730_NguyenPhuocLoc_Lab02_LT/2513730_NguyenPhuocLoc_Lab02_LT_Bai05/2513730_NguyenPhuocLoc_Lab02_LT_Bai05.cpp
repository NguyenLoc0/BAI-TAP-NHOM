#include <iostream>
#include <conio.h>
using namespace std;

int TongSoDoGocDaGiacLoinN(int n) {
	return (n - 2) * 180;
}

int TongDuongCheoDaGiacLoi(int n) {
	return (n * (n - 3)) / 2;
}

void main() {
	int n;

	cout << "Nhap so canh cua da giac loi: "; cin >> n;

	cout << "Tong so do goc cua da giac loi: " << TongSoDoGocDaGiacLoinN(n) << endl;
	cout << "Tong so duong cheo cua da giac loi: " << TongDuongCheoDaGiacLoi(n);

	_getch();
}