#include <iostream>
using namespace std;

int main()
{
	int x, y;
	double Temp[3][7];
	cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;
	x = 0;
	do {
		for (y = 0; y < 7; y++)
		{
			if (x == 0)
				cout << "Input Temp. on Province A, Day " << y + 1 << "=\t";
			else if (x == 1)
				cout << "Input Temp. on Province B, Day " << y + 1 << "=\t";
			else
				cout << "Input Temp. on Province C, Day " << y + 1 << "=\t";
			cin >> Temp[x][y];
		}
		x += 1;
	} while (x < 3);

	cout << "Displaying Values: " << endl;
	x = 0;
	do {
		for (y = 0; y < 7; y++)
		{
			if (x == 0)
				cout << "Temperature on Province A, Day " << y + 1 << "=\t";
			else if (x == 1)
				cout << "Temperature on Province B, Day " << y + 1 << "=\t";
			else
				cout << "Temperature on Province C, Day " << y + 1 << "=\t";
			cout << Temp[x][y] << endl;
		}
		x += 1;
	} while (x < 3);


	system("pause");
	return 0;
}