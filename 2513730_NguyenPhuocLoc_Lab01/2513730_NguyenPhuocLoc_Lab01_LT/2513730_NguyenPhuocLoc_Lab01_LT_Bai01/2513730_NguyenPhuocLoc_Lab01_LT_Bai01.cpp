#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	int temp, a, b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Truoc khi hoan doi: a= " << a << " va b= " << b << endl;

	temp = a;
	a = b;
	b = temp;
	cout << "\nSau khi hoan doi lan 1: a= " << a << " va b= " << b << endl;
	
	temp = a;
	a = b;
	b = temp;
	cout << "Sau khi hoan doi lan 2: a= " << a << " va b= " << b << endl;

	_getch();
}