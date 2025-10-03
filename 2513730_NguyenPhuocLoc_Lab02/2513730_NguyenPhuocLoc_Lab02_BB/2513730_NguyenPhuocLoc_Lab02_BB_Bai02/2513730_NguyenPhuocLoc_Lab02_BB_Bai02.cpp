#include <iostream>
#include <conio.h>
#define HOUR 3600
#define MINUTE 60
using namespace std;

int SecondToHour(unsigned int giay)
{
	return giay / HOUR;
}
int SecondToMinute(unsigned int giay)
{
	return (giay % HOUR) / MINUTE;
}
int SecondToSecond(unsigned int giay)
{
	return (giay % HOUR) % MINUTE;
}

void main()
{
	int giay;

	cout << "Nhap so giay: "; cin >> giay;

	cout << "\nThoi gian sau khi chuyen doi la: " << SecondToHour(giay) << ":" << SecondToMinute(giay) << ":" << SecondToSecond(giay) << endl;

	_getch();
}