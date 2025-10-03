#include <iostream>
#include <conio.h>
using namespace std;

double TimMax(double a, double b) {
	return (a > b) ? a : b;
}

double TimMax4(double a, double b, double c, double d) {
	return TimMax(TimMax(a, b), TimMax(c, d));
}

void main() {
	double a, b, c, d;

	cout << "Nhap vao 4 so thuc: "; cin >> a >> b >> c >> d;

	cout << "\nSo lon nhat trong 4 so la: " << TimMax4(a, b, c, d) << endl;

	_getch();
}