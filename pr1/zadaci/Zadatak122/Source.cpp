#include <iostream>
using namespace std;

/*
	Zadatak 112:
	Napravite program u kojem cete u funkciji main zahtijevati od korisnika 
	unos dvije vrijednosti, m za pocetak niza i n za kraj niza. Funkcija main 
	treba proslijediti m i n novoj funkciji svi_prosti koja æe ispisati sve 
	proste brojeve koji se nalaze u tom nizu. Koristite gotovu funkciju prost.
*/

bool prost(int);
void svi_prosti(int, int);

int main()
{
	int m, n;

	cout << "Unesite vrijednost m: ";
	cin >> m;
	cout << "Unesite vrijednost n: ";
	cin >> n;

	if (m < n)
	{
		cout << "Vrijednost m mora biti veca od n\n";
		return 1;
	}
	if (m <= 0 || n <= 0)
	{
		cout << "Vrijednosti m i n moraju biti vece od nule.\n";
		return 2;
	}
	
	cout << "Prosti brojevi su\n";
	svi_prosti(m, n);

	system("pause");
	return 0;
}

void svi_prosti(int m, int n)
{
	

	for (int i = m; i <= n; i++)
	{
		if (prost(i))
			cout << "Broj " << i << " je prost!\n";
	}
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