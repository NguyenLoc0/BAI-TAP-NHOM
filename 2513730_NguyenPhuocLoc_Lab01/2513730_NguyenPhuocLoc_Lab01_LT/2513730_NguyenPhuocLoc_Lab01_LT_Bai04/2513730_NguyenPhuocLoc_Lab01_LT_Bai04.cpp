#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void main() {
	float t, v, w;
	
	cout << "Nhap nhiet do F: "; cin >> t;
	while (!( - 50 <= t && t <= 50)) {
		cout << "Nhap nhiet do F: "; cin >> t;
	}

	cout << "Nhap van toc (mph): "; cin >> v;
	while (!(3 <= v && v <= 120)) {
		cout << "Nhap van toc (mph): "; cin >> v;
	}

	w = 35.74 + 0.6215 * t - 35.75 * pow(v, 0.16) + 0.4275 * t * pow(v, 0.16);

	cout << "Do lanh gio: " << w << endl;

	_getch();
}