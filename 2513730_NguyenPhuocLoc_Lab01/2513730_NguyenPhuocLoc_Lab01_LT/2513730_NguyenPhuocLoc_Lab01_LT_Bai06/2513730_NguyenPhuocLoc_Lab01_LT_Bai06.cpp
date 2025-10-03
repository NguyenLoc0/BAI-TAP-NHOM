#include <iostream>
#include <conio.h>
#include <sstream>
using namespace std;

void main() {
	int ngay, thang, nam, ngayZeller, ThangZeller, NamZeller, ThuZeller;
	char slash1, slash2;
	string thu;

	cout << "Nhap ngay hom nay (dd/mm/yyyy): ";
	cin >> ngay >> slash1 >> thang >> slash2 >> nam;

	NamZeller = nam - (14 - thang) / 12;
	ThangZeller = thang + 12 * ((14 - thang) / 12) - 2;
	ngayZeller = NamZeller + NamZeller / 4 - NamZeller / 100 + NamZeller / 400;
	ThuZeller = (ngay+ ngayZeller+(31*ThangZeller)/12)%7;

	switch (ThuZeller)
	{
		case 0: thu = "chu nhat"; break;
		case 1: thu = "hai"; break;
		case 2: thu = "ba"; break;
		case 3: thu = "tu"; break;
		case 4: thu = "nam"; break;
		case 5: thu = "sau"; break;
		case 6: thu = "bay"; break;
	}

	cout << "Hom nay la thu " << thu;

	_getch();
}