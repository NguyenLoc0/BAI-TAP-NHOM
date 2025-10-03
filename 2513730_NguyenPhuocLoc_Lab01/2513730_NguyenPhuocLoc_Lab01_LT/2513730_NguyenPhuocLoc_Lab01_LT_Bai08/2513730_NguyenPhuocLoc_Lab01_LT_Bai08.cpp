#include <iostream>
#include <conio.h>
using namespace std;

float CtoF (float C) {
	return (9.0 / 5) * C + 32;
}

float CtoK (float C) {
	return C + 273.15;
}

float CtoR(float C) {
	return (C + 273.15) * (9.0 / 5);
}

void main() {
	float C;

	cout << "Nhap nhiet do (Celsius): "; cin >> C;
	cout << "Nhiet do (Kelvin): " << CtoK(C) << endl << "Nhiet do (Fahrenheit): " << CtoF(C) << endl << "Nhiet do (Rankine): " << CtoR(C) << endl;

	_getch();
}