#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	int n, gio, phut, giay;
	#define max 3600
	#define sixty 60

	cout << "Nhap so giay: "; cin >> n;
	gio = n / max;
	phut = (n % max) / sixty;
	giay = (n % max) % sixty;

	printf("\n%.2d:%.2d:%.2d", gio, phut, giay);

	_getch();
}