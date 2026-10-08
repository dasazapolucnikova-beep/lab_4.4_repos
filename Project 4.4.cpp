#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "-----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "-----------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < -7 || x > 4)
			F = 0;
		else if (x >= -7 && x < -3)
			F = x + 7;
		else if (x >= -3 && x < -2)
			F = 4;
		else if (x >= -2 && x < 2)
			F = x * x; // або pow(x, 2)
		else // x >= 2 && x <= 4
			F = -2 * x + 8;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;

		x += dx;
	}

	cout << "-----------------------" << endl;
	return 0;
}
