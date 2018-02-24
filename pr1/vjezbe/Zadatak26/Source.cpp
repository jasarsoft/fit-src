#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
	Napisite program, postujuci sve faze procesa programiranja, 
	koji racuna sumu znamenki unesenog cijelog broja.  
*/

int main()
{
	int broj, suma = 0;

	cout << "Unesi broj: ";
	cin >> broj;

	if (broj < 0)
		broj = abs(broj);

	do
	{
		suma += broj % 10;
		broj /= 10;
	} while (broj > 0);

	cout << "Suma znamenki je: " << suma << endl;

	system("pause");
	return 0;
}