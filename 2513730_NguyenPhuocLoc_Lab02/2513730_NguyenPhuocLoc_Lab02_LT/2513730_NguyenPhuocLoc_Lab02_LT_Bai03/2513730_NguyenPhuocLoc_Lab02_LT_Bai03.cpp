#include <iostream>
#include <conio.h>
using namespace std;

float CtoF(float C) {
	return (9.0 / 5) * C + 32;
}
float CtoK(float C) {
	return C + 273.15;
}
float CtoR(float C) {
	return (9.0 / 5) * C + 273.15;
}

void main() {
	float C;
	cout << "Nhap vao nhiet do C: "; cin >> C;

	cout << "\nNhiet do F: " << CtoF(C) << endl;
	cout << "Nhiet do K: " << CtoK(C) << endl;
	cout << "Nhiet do R: " << CtoR(C) << endl;
}