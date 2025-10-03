#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	float  r, g, b, c, m, y, k, w;
	cout << "Nhap gia tri RBG: ";
	cin >> r >> g >> b;

	w = max(max(r / 255, g / 255), b / 255);
	c = (w - r / 255) / w;
	m = (w - g / 255) / w;
	y = (w - b / 255) / w;
	b = 1 - w;

	cout << "c = "<< c << endl;
	cout << "m = "<< m << endl;
	cout << "y = "<< y << endl;
	cout << "b = "<< b << endl;

	_getch();
}