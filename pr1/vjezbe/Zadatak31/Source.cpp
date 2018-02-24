#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program za ispis tablice mnozenja prvih 10 prirodnih brojeva.
	Psštujte sve faze procesa programiranja. 
*/

int main()
{
	cout << "Tablica mnozenja do broja 10\n\n";
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
			cout << setw(3) << i << " * " << setw(3) << j << " = " << setw(3) << i*j << endl;

		cout << endl;
	}

	system("pause");
	return 0;
}