#include <iostream>
using namespace std;

/*
	Zadatak 114:
	a) Napravite funkciju suma_faktorijela sa dva ulazna parametra, cija ce 
	povratna vrijednost biti suma faktorijela za brojeve iz raspona od u1 do u2.
	Napravite test program za funkciju.
*/

int fakt(int);
int suma_faktorijela(int, int);

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

	cout << "Suma faktorijela od " << m << " do " << n << " je: " << suma_faktorijela(m, n) << endl;

	system("pause");
	return 0;
}

int suma_faktorijela(int m, int n)
{
	int suma = 0;

	for (int i = m; i <= n; i++)
		suma += fakt(i);

	return suma;
}

int fakt(int broj)
{
	int x = 1;

	for (int i = 2; i <= broj; i++)
		x *= i;

	return x;
}