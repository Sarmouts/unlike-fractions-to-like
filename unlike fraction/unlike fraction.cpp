#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double LCM(double a, double b)
{
	if (a / b == round(a / b) || b / a == round(b / a))
	{
		return fmax(a, b);
	}
	else
	{
		return a * b;
	}
}
string likeFraction(double x, double y, double a, double b)
{
	double lcm, kapelaki1, kapelaki2;
	lcm = LCM(abs(y), abs(b));
	kapelaki1 = lcm / abs(y);
	kapelaki2 = lcm / abs(b);
	x *= kapelaki1;
	y *= kapelaki1;
	a *= kapelaki2;
	b *= kapelaki2;
	if (y < 0 && b < 0)
	{
		return "x/y = " + to_string(static_cast<int>(-x)) + "/" + to_string(static_cast<int>(abs(y))) + ", a/b = " + to_string(static_cast<int>(-a)) + "/" + to_string(static_cast<int>(abs(b)));
	}
	else if (b < 0)
	{
		return "x/y = " + to_string(static_cast<int>(x)) + "/" + to_string(static_cast<int>(abs(y))) + ", a/b = " + to_string(static_cast<int>(-a)) + "/" + to_string(static_cast<int>(abs(b)));
	}
	else if (y < 0)
	{
		return "x/y = " + to_string(static_cast<int>(-x)) + "/" + to_string(static_cast<int>(abs(y))) + ", a/b = " + to_string(static_cast<int>(a)) + "/" + to_string(static_cast<int>(abs(b)));
	}
	else
	{
		return "x/y = " + to_string(static_cast<int>(x)) + "/" + to_string(static_cast<int>(abs(y))) + ", a/b = " + to_string(static_cast<int>(a)) + "/" + to_string(static_cast<int>(abs(b)));
	}
}
int main()
{
	while (true)
	{
		cout << "Welcome to unlike Fractions to like calculator" << endl;
		cout << "---------------------------------------" << endl;
		double x, y, a, b;
		cout << "x/y  a/b" << endl;
		cout << "--------" << endl;
		cout << "Enter numerator x: ";
		cin >> x;
		cout << "Enter denoverator y: ";
		cin >> y;
		cout << "Enter numerator a: ";
		cin >> a;
		cout << "Enter denoverator b: ";
		cin >> b;
		cout << likeFraction(x, y, a, b) << endl;
	}
}