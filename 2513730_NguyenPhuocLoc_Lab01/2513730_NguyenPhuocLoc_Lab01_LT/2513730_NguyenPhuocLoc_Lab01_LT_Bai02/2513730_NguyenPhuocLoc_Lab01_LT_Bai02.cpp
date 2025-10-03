#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	float w, h, bmi;

	cout << "Nhap can nang (kg): "; cin >> w;
	cout << "Nhap chieu cao (m): "; cin >> h;

	bmi = w / (h * h);

	cout << "Chi so BMI: " << bmi << endl;

	_getch();
}