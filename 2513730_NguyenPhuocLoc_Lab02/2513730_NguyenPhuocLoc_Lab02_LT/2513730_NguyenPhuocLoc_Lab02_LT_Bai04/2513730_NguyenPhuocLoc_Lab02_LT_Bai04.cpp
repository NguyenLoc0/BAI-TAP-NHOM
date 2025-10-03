#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

double SoTienPhaiTraHangThang (double Money, double Rate, double Year) {
	int n = Year * 12;
	float r = Rate / (100 * 12);
	double p = (Money * r * pow(1 + r, n)) / (pow(1 + r, n) - 1);
	return p;
}

void main() {
	double SoTienMuon, LaiSuat, ThoiGianMuon;
	cout << "Nhap so tien muon: "; cin >> SoTienMuon;
	cout << "Nhap lai suat: "; cin >> LaiSuat;
	cout << "Nhap thoi gian muon: "; cin >> ThoiGianMuon;

	cout << "So tien phai tra hang thang: " <<fixed<<setprecision(0)<< SoTienPhaiTraHangThang(SoTienMuon, LaiSuat, ThoiGianMuon);

	_getch();
}