#include <iostream>
using namespace std;

/*
	Napravite program koji ce u funkciji main zahtijevati unos dvije vrijednosti 
	m i n od korisnika. Funkcija main treba da proslijedi parametre m i n novoj 
	funkciji nad koja treba izracunati vrijednost  (cita se: m nad n) i vratiti 
	tu vrijednost. U funkciji main pridruzite izlaznu vrijednost ispisu cout. 
	Koristite svoju gotovu funkciju fakt.
*/

int fakt(int);
int binom(int, int);

int main()
{
	int m, n;

	cout << "Unesite vrijednost m: ";
	cin >> m;
	cout << "Unesite vrijednost n: ";
	cin >> n;

	cout << "m nad k je: " << binom(m, n) << endl;
	
	system("pause");
	return 0;
}

int binom(int m, int n)
{
	return fakt(m) / (fakt(n)*fakt(m - n));
}

int fakt(int broj)
{
	int x = 1;

	for (int i = 2; i <= broj; i++)
		x *= i;

	return x;
}