#include <iostream>
#include <conio.h>
using namespace std;

void ChuyenDoiHeMau(float r, float g, float b, float& c, float& m, float& y, float& w, float& k) {
	w = max(max(r / 255, g / 255), b / 255);
	c = (w - r / 255) / w;
	m = (w - g / 255) / w;
	y = (w - b / 255) / w;
	k = 1 - w;
}

void main() {
	float r, g, b;
	float c, m, y, w, k;

	cout << "Nhap vao gia tri R, G, B: "; cin >> r >> g >> b;

	if (r == 0 && g == 0 && b == 0) {
		c = 0;
		m = 0;
		y = 0;
		w = 0;
		k = 1;
	}
	else{
		ChuyenDoiHeMau(r, g, b, c, m, y, w, k);
		
	}
	cout << "Gia tri C: " << c << endl;
	cout << "Gia tri M: " << m << endl;
	cout << "Gia tri Y: " << y << endl;
	cout << "Gia tri K: " << k << endl;

	_getch();
}