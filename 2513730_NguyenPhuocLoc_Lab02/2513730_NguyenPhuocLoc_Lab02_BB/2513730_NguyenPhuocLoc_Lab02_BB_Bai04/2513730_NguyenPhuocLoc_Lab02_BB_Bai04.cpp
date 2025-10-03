#include <iostream>
#include <conio.h>
#define PI 3.14159265
using namespace std;

float ChuviMatday(float bankinh)
{
	return 2 * PI * bankinh;
}

float DientichMatday(float bankinh)
{
	return PI * bankinh * bankinh;
}

float DientichXungquanh(float bankinh, float chieucao)
{
	return ChuviMatday(bankinh) * chieucao;
}

float ThetichHinhTru(float bankinh, float chieucao)
{
	return DientichMatday(bankinh) * chieucao;
}

float DientichToanphan(float bankinh, float chieucao)
{
	return 2 * DientichMatday(bankinh) + DientichXungquanh(bankinh, chieucao);
}

void main()
{
	float bankinh, chieucao;

	cout << "Nhap ban kinh hinh tru: "; cin >> bankinh;
	cout << "Nhap chieu cao hinh tru: "; cin >> chieucao;

	cout << "\nChu vi mat day hinh tru la: " << ChuviMatday(bankinh) << endl;
	cout << "Dien tich mat day hinh tru la: " << DientichMatday(bankinh) << endl;
	cout << "Dien tich xung quanh hinh tru la: " << DientichXungquanh(bankinh, chieucao) << endl;
	cout << "The tich hinh tru la: " << ThetichHinhTru(bankinh, chieucao) << endl;
	cout << "Dien tich toan phan hinh tru la: " << DientichToanphan(bankinh, chieucao) << endl;

	_getch();
}