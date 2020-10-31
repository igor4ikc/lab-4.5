#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R, Pi;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "Pi = "; cin >> Pi;
		cout << "R = "; cin >> R;
		if ((y <= 0 && x <= 0 && y >= 1.2 * (R * R)) ||
			(y >= 0 && x >= 0 && y <= Pi == 4 * atan(1.0) * (R * R)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = (2 * R) * rand() / RAND_MAX - R;
		y = (2 * R) * rand() / RAND_MAX - R;
			if ((y <= 0 && x <= 0 && y >= 1.2 * (R * R)) ||
				(y >= 0 && x >= 0 && y <= Pi == 4 * atan(1.0) * (R * R)))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}