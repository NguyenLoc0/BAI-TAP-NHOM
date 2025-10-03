#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void main() {
	int x, y;
	cout << "Nhap co so x: "; cin >> x;
	cout << "Nhap so mu y: "; cin >> y;

	cout << x << "^" << y << " = " << pow(x, y) << endl;

	_getch();
}