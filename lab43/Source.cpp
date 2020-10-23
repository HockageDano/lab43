#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	double x, xp, xk, dx, B, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (a < 0 && c != 0)
			B = ((a * (x * x)) + (((b * x) + c)));
		else
			if (0 < a && c == 0)
				B = (-a) / (x - c);
			else
				B = a * (x + c);
		F = B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}