import Math;
#include<math.h>
#include<Windows.h>
#include<iostream>
using namespace Math;
Complex f(const Complex& z)
{
	Complex itog;
	Complex a = 1 + 0i;
	Complex u = z;
	itog = a * pow(double(u), 2) - cos(double(2 * u));
	return itog;
}
Rational f(const Rational& r)
{
	Rational itog;
	Rational a = (1, 1);
	Rational u = r;
	itog = a * pow(double(u), 2) - cos(double(2 * u));
	return itog;
}
double f(double x)
{
	double itog;
	double a = 1.0 ;
	double u = x;
	itog = a * pow(u, 2) - cos(double(2 * u));
	return itog;
}
void main()
{
	setlocale(LC_ALL, "rus");
	int m, s;
	double a, b, x;
	std::cout << "¬ведите реальную часть комплексного числа ";
	std::cin >> a;
	std::cout << "¬ведите мнимую часть комплексного числа ";
	std::cin >> b;
	std::cout << "¬ведите числитель дроби ";
	std::cin >> s;
	std::cout << "¬ведите знаменатель ";
	std::cin >> m;
	std::cout << "¬ведите вещЄственное число ";
	std::cin >> x;
	Complex z = Complex(a, b);
	Rational r = Rational(s, m);
	std::cout << "–езультат с комплексным числом: " << f(z) << std::endl;
	std::cout << "–езультат с рациональным числом: " << f(r) << std::endl;
	std::cout << "–езультат с вещественным числом: " << f(x) << std::endl;
}

