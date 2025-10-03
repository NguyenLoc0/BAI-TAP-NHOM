#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	int x, y;

	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;

	cout << "x++ = " << x++ << endl;
	cout << "x-- = " << x-- << endl;
	cout << "++x = " << ++x << endl;
	cout << "--x = " << --x << endl;
	cout << "x=x/y = " << x / y << endl;
	cout << "y=x%y = " << x % y << endl;
	cout << "x*=y = " << x * y << endl;

	_getch();
}