#include <iostream>
using namespace std;

/*
	Zadatak 113:
	Napravite funkciju brojac_prostih sa dva ulazna parametra, cija ce povratna 
	vrijednost biti vrijednost koja predstavlja broj prostih brojeva od u1 do u2, 
	tj. izbrojane proste brojeve u rasponu od u1 do u2.
	Napravite test program za funkciju.
*/

bool prost(int);
int brojac_prostih(int, int);

int main()
{
	int m, n;

	cout << "Unesite vrijednost m: ";
	cin >> m;
	cout << "Unesite vrijednost n: ";
	cin >> n;

	if (m > n)
	{
		cout << "Vrijednost m mora biti manja od n.\n";
		system("pause");
		return 1;
	}
	if (m <= 0 || n <= 0)
	{
		cout << "Vrijednosti m i n moraju biti vece od nule.\n";
		system("pause");
		return 2;
	}

	cout << "Ukupno prosti brojeva od " << m << " do " << n << " je: " << brojac_prostih(m, n) << endl;

	system("pause");
	return 0;
}

int brojac_prostih(int m, int n)
{
	int x = 0;

	for (int i = m; i <= n; i++)
	{
		if (prost(i))
			x++;
	}

	return x;
}

bool prost(int broj)
{
	bool p = true;

	for (int i = 2; i <= (broj / 2) + 1; i++)
	{
		if (broj % i == 0 && broj != i)
		{
			p = false;
			break;
		}	
	}
	
	return p;
}