#include <iostream>
#include <cmath>

using namespace std;

double side(double ax, double bx, double ay, double by, double az, double bz) {
	return sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay) + (bz - az) * (bz - az));
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double s, c, a, b, ax, ay, az, bx, by, bz, cx, cy, cz;
	cout << "Введите способ ввода (1/2)\n";
	cin >> c;
	if (c == 1) {
		cout << "Введите длины сторон треугольника: \n";
		cin >> a >> b >> c;
		s = (a + b + c)/2 ;
		cout << "S = " << s;
	}
	else {
		cout << "Введите координаты сторон треугольника: \n";
		cin >> ax >> ay >> az >> bx >> by >> bz >> cx >> cy >> cz;
		double a = side(bx, ax, by, ay, bz, az);
		double b = side(cx, ax, cy, ay, cz, az);
		double c = side(bx, cx, by, cy, bz, cz);
		double p = (a + b + c) / 2;
		double s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << s;
	}
	return 0;
}