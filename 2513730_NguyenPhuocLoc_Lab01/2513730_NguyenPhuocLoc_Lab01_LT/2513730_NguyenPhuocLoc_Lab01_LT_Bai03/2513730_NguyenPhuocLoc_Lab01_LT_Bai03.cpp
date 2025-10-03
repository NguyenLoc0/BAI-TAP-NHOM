#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

void main() {
	float x_a, y_a, x_b, y_b, kc;

	cout << "Nhap toa do diem A (x_a, y_a): "; cin >> x_a >> y_a;
	cout << "Nhap toa do diem B (x_b, y_b): "; cin >> x_b >> y_b;

	kc = sqrt(pow((x_b - x_a), 2) + pow((y_b - y_a), 2));

	cout << "Khoang cach giua 2 diem A va B: " << kc << endl;

	_getch();
}