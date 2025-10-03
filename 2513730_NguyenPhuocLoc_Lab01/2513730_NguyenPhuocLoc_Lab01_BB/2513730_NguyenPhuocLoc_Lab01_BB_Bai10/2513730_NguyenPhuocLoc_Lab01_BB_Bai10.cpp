#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void main() {
	cout << right << setw(50) << "DANH SACH SINH VIEN" << endl;
	cout << left << setw(25) << "MSSV" << setw(35) << "Ho va ten" << setw(15) << "Khoa" << setw(15) << "Diem" << endl;
	cout << left << setw(25) << "----" << setw(35) << "-------------------" << setw(15) << "----" << setw(15) << "----" << endl;

	cout << left << setw(25) << "1211520" << setw(35) << "Le Duy Tung" << setw(15) << "33" << setw(15) << "4.57" << endl;
	cout << left << setw(25) << "1210152" << setw(35) << "Tran Van Tien" << setw(15) << "34" << setw(15) << "VT" << endl;
	cout << left << setw(25) << "1211962" << setw(35) << "Pham Duc Anh" << setw(15) << "33" << setw(15) << "6.48" << endl;
	cout << left << setw(25) << "1211518" << setw(35) << "Nguyen Hong Phuc" << setw(15) << "36" << setw(15) << "VT" << endl;
	cout << left << setw(25) << "1211510" << setw(35) << "Pham Minh Duc" << setw(15) << "30" << setw(15) << "8.05" << endl;
	cout << left << setw(25) << "1211793" << setw(35) << "Nguyen Khac Vy" << setw(15) << "33" << setw(15) << "VT" << endl;
	cout << left << setw(25) << "1211519" << setw(35) << "Nguyen Tan Tai" << setw(15) << "34" << setw(15) << "2.89" << endl;

	cout << "================================================================================================================";
	_getch();
}