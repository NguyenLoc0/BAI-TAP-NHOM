#include <iostream>
#include <conio.h>
using namespace std;

int BMI(float weight, float height) {
	return weight / (height * height);
}

void main() {
	float weight, height;

	cout << "Nhap can nang (kg): "; cin >> weight;
	cout << "Nhap chieu cao (m): "; cin >> height;

	cout << "Chi so BMI: " << BMI(weight, height) << endl;

	_getch();
}