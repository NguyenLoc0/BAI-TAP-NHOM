#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float ChuviHinhThang(float a, float b, float h)
{
	return a + b + 2 * sqrt(h * h + pow((a - b), 2) / 4);
}

float DientichHinhThang(float a, float b, float h)
{
	return ((a + b) * h) / 2;
}

void main()
{
	float Daylon, Daybe, ChieuCao;

	cout << "Nhap do dai day lon a: "; cin >> Daylon;
	cout << "Nhap do dai day nho b: "; cin >> Daybe;
	cout << "Nhap chieu cao h: "; cin >> ChieuCao;

	cout << "\nChu vi hinh thang la: " << ChuviHinhThang(Daylon, Daybe, ChieuCao) << endl;
	cout << "Dien tich hinh thang la: " << DientichHinhThang(Daylon, Daybe, ChieuCao) << endl;

	_getch();
}