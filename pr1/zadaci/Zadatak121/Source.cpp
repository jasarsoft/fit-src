#include <iostream>
using namespace std;

/*
	Zadatak 111:
	Program iz prethodnog zadatka br. 131 je malo nepouzdan. Da bi program 
	ispravno radio, korisnik mora da unese drugi broj koji je veci od prvog, 
	inace bi program neispravno radio. Ovo bi mogli poboljsati kada bi vrsili 
	provjeru prilikom poziva funkcije nad. U slucaju da je prvi broj manji od 
	drugog pozvali bi funkciju nad sa parametrima n i m, umjesto m i n.
	Umjesto if-else-iskaza za provjeru, mozemo koristiti nase gotove funkcije min i max;
*/

int min(int, int);
int max(int, int);
int fakt(int);
int binom(int, int);

int main()
{
	int m, n;

	cout << "Unesite vrijednost m: ";
	cin >> m;
	cout << "Unesite vrijednost n: ";
	cin >> n;

	cout << "M nad N je: " << binom(max(m, n), min(m, n)) << endl;

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