#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void main() {
	float So_tien_vay, Nam, Lai_suat, n, r, p;

	cout << "Nhap so tien vay muon: "; cin >> So_tien_vay;
	cout << "Nhap so nam vay muon: "; cin >> Nam;
	cout << "Nhap lai suat: "; cin >> Lai_suat;

	n = Nam * 12;
	r = Lai_suat / (12 * 100);
	p = (So_tien_vay * r) / (1 - pow((1 + r), -n));

	cout << "Moi thang phai tra: " << p << endl;

	_getch();
}