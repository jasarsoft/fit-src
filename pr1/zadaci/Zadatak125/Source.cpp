#include <iostream>
using namespace std;

/*
	Zadatak 114:
	b) Nakonsšto ste to odradili, prepravite funkciju sumafakt tako da ta 
	funkcija moze racunati sumu ako korisnik unese prvi broj veci od drugog, 
	a u slucaju da korisnik unese, kao pocetak ili kraj niza, negativan broj 
	funkcija sumafakt treba vratiti vrijednost 0. 
	Koristite vase gotove funkcije min i max.
*/

int min(int, int);
int max(int, int);
int fakt(int);
int suma_faktorijela(int, int);

int main()
{
	int m, n;

	cout << "Unesite vrijednost m: ";
	cin >> m;
	cout << "Unesite vrijednost n: ";
	cin >> n;

	cout << "Suma faktorijela od " << m << " do " << n << " je: " << suma_faktorijela(m, n) << endl;

	system("pause");
	return 0;
}


int suma_faktorijela(int m, int n)
{
	int suma = 0;

	if (m <= 0 || n <= 0)
		return suma;

	if(m <= n)
		for (int i = m; i <= n; i++)
			suma += fakt(i);
	else
		for (int i = n; i <= m; i++)
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

int min(int a, int b)
{
	return a <= b ? a : b;
}

int max(int a, int b)
{
	return a >= b ? a : b;
}