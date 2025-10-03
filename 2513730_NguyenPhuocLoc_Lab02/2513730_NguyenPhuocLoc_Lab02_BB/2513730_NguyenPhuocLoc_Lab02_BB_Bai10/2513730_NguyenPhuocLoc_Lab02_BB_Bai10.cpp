#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

double TinhDoCao(double delta, double phi, double h) {
	return asin(sin(phi) * sin(delta) + cos(phi) * cos(delta) * cos(h));
}
double TinhPhuongVi(double delta, double phi, double h) {
	return acos((cos(phi) * sin(delta) - sin(phi) * cos(delta) * cos(h)) / cos(TinhDoCao(delta, phi, h)));
}

void main() {
	double delta, phi, h;

	cout << "Nhap vao xich vi do (delta): "; cin >> delta;
	cout << "Nhap vao vi do (phi): "; cin >> phi;
	cout << "Nhap vao gio (h): "; cin >> h;

	cout << "\nDo cao cua mat troi: " << TinhDoCao(delta, phi, h) << " do" << endl;
	cout << "Phuong vi cua mat troi: " << TinhPhuongVi(delta, phi, h) << " do" << endl;

	_getch();
}