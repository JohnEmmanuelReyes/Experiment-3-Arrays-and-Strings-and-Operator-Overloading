#include<iostream>
using namespace std;
int main()
{
	int arr[10], i, mx, mn, T = 0;
	double A = 0;

	cout << "Enter the elements of the array : ";
	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
		T += arr[i];
		A = (double)T / 10;
	}
		mx = arr[0];
		cout << "The total of all integers is: \t " << T << endl;
		cout << "The average of all integers is: \t " << A << endl;
		i = 0;
	do {
			i += 1;
			if (mx < arr[i])
				mx = arr[i];
	} while (i < 10);
	mn = arr[9];
	for (i = 0; i < 10; i++)
		{
			if (mn > arr[i])
				mn = arr[i];
		}
		cout << "The Largest integer is : \t" << mx << endl;
		cout << "The Smallest integer is : \t" << mn << endl;
	
	system("pause");
	return 0;
}