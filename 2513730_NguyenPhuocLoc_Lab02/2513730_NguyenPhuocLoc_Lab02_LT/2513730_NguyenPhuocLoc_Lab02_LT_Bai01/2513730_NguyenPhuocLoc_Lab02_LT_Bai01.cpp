#include <iostream>
#include <conio.h>
using namespace std;

int ChuyenDoiThuTrongTuan(int ngay, int thang, int nam) {
	int t = nam - (14 - thang) / 12;
	int x = t + t / 4 - t / 100 + t / 400;
	int k = thang + 12 * ((14 - thang) / 12) - 2;
	int w = (ngay + x + (31 * k) / 12) % 7;

	return w;
}

void main() {
	int ngay, thang, nam;
	char slash1, slash2;

	cout << "Nhap vao ngay/thang/nam: "; cin >> ngay >> slash1 >> thang >> slash2 >> nam;

	int thu = ChuyenDoiThuTrongTuan(ngay, thang, nam);
	cout << "Hom nay la: ";
	switch (thu) {
	case 0:
		cout << "Chu Nhat";
		break;
	case 1:
		cout << "Thu Hai";
		break;
	case 2:
		cout << "Thu Ba";
		break;
	case 3:
		cout << "Thu Tu";
		break;
	case 4:
		cout << "Thu Nam";
		break;
	case 5:
		cout << "Thu Sau";
		break;
	case 6:
		cout << "Thu Bay";
		break;
	default:
		cout << "Loi!";
		break;
	}


	_getch();
}