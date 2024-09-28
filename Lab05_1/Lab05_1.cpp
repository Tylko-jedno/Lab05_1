#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y);

int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double c = k(p + sqrt(q), q - sqrt(p))*k(p + sqrt(q), q - sqrt(p)) - k(1, p + q);

	cout << "c = " << c << endl;
}

double k(const double x, const double y)
{
	return x/abs(x*x*x + y*y*y) + y/abs(x + y);
}
