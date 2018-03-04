#include <iostream>
using namespace std;

/*
	Zadatak 109:
	Napravite sljedece funkcije koje nisu void (napravite funkcije sa povratnom vrijednoscu):
	-	min: ciji ce izlaz biti manji broj od dva ulazna broja
	-	max: ciji ce izlaz biti veci broj od dva ulazna broja
	-	fakt: ciji ce izlaz biti izracunati faktorijel
	-	prost: koja ce vracati vrijednost 1 (true) ako je njezin parametar prost broj, ako nije prost onda vraca vrijednost 0 (false)
	-	sumakvadrata: koja vraca sumu kvadrata od u1 do u2
*/

int min(int, int);
int max(int, int);
int fakt(int);
bool prost(int);
int sumakvadrata(int, int);

int main()
{
	cout << "Broj 17 je prost: " << prost(17) << endl;
	cout << "Broj 3 i 2 je manji: " << min(3, 2) << endl;
	cout << "Broj 3 i 2 je veci: " << max(3, 2) << endl;
	cout << "Faktorijel broja 5 je: " << fakt(5) << endl;
	cout << "Suma kvadrata broj (2, 6) je: " << sumakvadrata(2, 6) << endl;
	system("pause");
	return 0;
}

int min(int a, int b)
{
	return a <= b ? a : b;
}

int max(int a, int b)
{
	return a >= b ? a : b;
}

int fakt(int broj)
{
	int x = 1;

	for (int i = 2; i <= broj; i++)
		x *= i;

	return x;
}

bool prost(int broj)
{
	bool p = true;

	for (int i = 2; i <= (broj / 2) + 1; i++)
	{
		if (broj % i == 0 && broj != i)
			p = false;
	}

	return p;
}

int sumakvadrata(int a, int b)
{
	int suma = 0;

	for (int i = a; i <= b; i++)
		suma += i*i;

	return suma;
}