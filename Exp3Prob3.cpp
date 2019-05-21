#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "Enter a string: \t ";
	char b[100];
	int c;
	cin.getline(b, 100);
	cout << "The reverse order of this array: \t";
		for (c = strlen(b) - 1; c >= 0; c--)
		{
		cout << b[c];
		}
	cout << "\n\n Size of array = \t" << strlen(b) + 1 << endl;
	
	system("pause");
	return 0;
}
