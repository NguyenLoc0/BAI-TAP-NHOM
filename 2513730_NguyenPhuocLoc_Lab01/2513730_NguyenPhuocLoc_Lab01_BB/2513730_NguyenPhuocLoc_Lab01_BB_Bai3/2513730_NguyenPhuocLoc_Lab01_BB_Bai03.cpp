#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	int x, y;

	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;

	cout << "\nx+y= " << x + y;
	cout << "\nx-y= " << x - y;
	cout << "\nx*y= " << x * y;
	cout << "\nx/y= " << x / y;
	cout << "\nx%y= " << x % y;

	_getch();
}