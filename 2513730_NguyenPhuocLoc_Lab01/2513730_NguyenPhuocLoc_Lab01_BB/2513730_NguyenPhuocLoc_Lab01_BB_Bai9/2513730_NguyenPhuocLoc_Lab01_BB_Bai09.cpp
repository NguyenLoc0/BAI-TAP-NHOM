#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void main() {
	float Chieucao, Daylon, Daybe, Chuvi, Dientich, Canhben;

	cout << "Nhap chieu cao hinh thang: "; cin >> Chieucao;
	cout << "Nhap day lon hinh thang: "; cin >> Daylon;
	cout << "Nhap day be hinh thang: "; cin >> Daybe;

	Canhben = sqrt(pow((Daylon - Daybe) / 2, 2) + pow(Chieucao, 2));
	Chuvi = Daylon + Daybe + 2 * Canhben;
	Dientich = (Daylon + Daybe) * Chieucao / 2;

	cout << "Chu vi hinh thang la: " << Chuvi << endl;
	cout << "Dien tich hinh thang la: " << Dientich << endl;

	_getch();
}