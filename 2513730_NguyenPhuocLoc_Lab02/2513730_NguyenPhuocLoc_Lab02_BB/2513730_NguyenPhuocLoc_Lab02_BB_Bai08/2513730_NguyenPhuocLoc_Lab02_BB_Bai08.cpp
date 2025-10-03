#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float windchill(float temperature, float windspeed) {
	return 35.74 + 0.6215 * temperature - 35.75 * pow(windspeed, 0.16) + 0.4275 * temperature * pow(windspeed, 0.16);
}

void main() {
	float temperature, windspeed;

	do {
		cout << "Nhap nhiet do (do F): "; cin >> temperature;
	} while (temperature > 50 || temperature <-50);

	do {
		cout << "Nhap toc do gio (mph): "; cin >> windspeed;
	} while (windspeed < 3 || windspeed > 120);

	cout << "\nChi so cam nhan thoi tiet: " << windchill(temperature, windspeed) << " do F" << endl;

	_getch();
}