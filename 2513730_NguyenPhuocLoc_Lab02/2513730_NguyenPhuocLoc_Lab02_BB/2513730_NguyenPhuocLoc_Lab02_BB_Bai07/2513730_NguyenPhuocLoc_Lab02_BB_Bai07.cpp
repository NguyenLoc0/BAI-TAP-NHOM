#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float KhoangCach2Diem(float x1, float y1, float x2, float y2) {
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

void main() {
	float x1, y1, x2, y2;

	cout << "Nhap toa do diem 1 (x1, y1): "; cin >> x1 >> y1;
	cout << "Nhap toa do diem 2 (x2, y2): "; cin >> x2 >> y2;

	cout << "\nKhoang cach giua 2 diem: " << KhoangCach2Diem(x1, y1, x2, y2) << endl;

	_getch();
}