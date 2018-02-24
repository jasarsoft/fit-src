#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program u kojem cete upotrijebiti funkciju za racunanje sume harmonijskog niza 
	dobule HSuma(int). Broj clanova niza odredjuje korisnik. Sumu je potrebno ispisati u 
	funkciji main. 
*/

double hSuma(int);

int main()
{
	int n;
	double suma = 0;

	cout << "Broj clanova harmonijskog niza: ";
	cin >> n;

	if (n < 0)
	{
		cout << "Broj mora biit veci od 0!\n";
		system("pause");
		return 1;
	}

	suma = hSuma(n);
	cout << "Suma harminijskog niza od " << n << "clanova je: " << suma << endl;

	system("pause");
	return 0;
}

double hSuma(int x)
{
	double suma = 0;

	for (int i = 1; i <= x; i++)
	{
		suma += 1.0 / i; //1/double(i);
	}

	return suma;
}