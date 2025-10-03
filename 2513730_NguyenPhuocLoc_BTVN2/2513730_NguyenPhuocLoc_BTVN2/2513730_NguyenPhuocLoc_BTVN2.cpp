#include <iostream>
#include <conio.h>
using namespace std;

int Giaithua (int n) {
	if ((n == 0) || (n == 1)) {
		return 1;
	}
	else {
		return n * Giaithua(n - 1);
	}

}

void Swap_int(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

float Giai_pt_bac_1(float a, float b) {
	if ((a != 0) && (b == 0)) {
		return 0;
	}
	else {
		return (-b) / a;
	}
}

float Tim_Max_2 (float a, float b) {
	return (a >= b) ? a : b;
}
float Tim_Max_4(float a, float b, float c, float d) {
	return Tim_Max_2(Tim_Max_2(a, b), Tim_Max_2(c, d));
}
void main() {
	int r, n, swap_a, swap_b;
	float Heso_a, Heso_b, a, b, c, d;
	do {
		cout << "Vui long nhap lan luot r va n (Luu y: r<n): ";
		cin >> r >> n;
	} while (r >= n);

	int Hoanvi = Giaithua(n) / Giaithua(n - r);
	printf("Hoan vi P(%d,%d) = %d\n", r, n, Hoanvi);

	cout << "\nNhap 2 so can doi cho: "; cin >> swap_a >> swap_b;
	Swap_int(swap_a, swap_b);
	cout << "2 so sau khi doi cho la: " << swap_a << ' ' << swap_b;

	cout << "\n\nNhap he so a va b: "; cin >> Heso_a >> Heso_b;
	if ((Heso_a == 0) && (Heso_b == 0)) {
		cout << "Phuong trinh co vo so nghiem";
	}
	else if ((Heso_a == 0) && (Heso_b != 0)) {
		cout << "Phuong trinh vo nghiem";
	}
	else {
		cout << "Ket qua sau khi giai phuong trinh: " << Giai_pt_bac_1(Heso_a, Heso_b);
	}

	cout << "\n\n Nhap 4 so de tim max: "; cin >> a >> b >> c >> d;
	cout << "Max 4 so la: " << Tim_Max_4(a, b, c, d);

	_getch();
}