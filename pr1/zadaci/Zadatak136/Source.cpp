#include <iostream>
#include <iomanip>
using namespace std;

/*
	Zadatak 125: 
	Napravite program u kome cete deklarisati niz velicine 50 tipa double. 
	Pitajte korisnika koliko brojeva zeli unijeti. U slucaju da odgovor bude 
	veci od 50, pitajte ponovo sve dok ne unese broj koji nije veci od 50.  
	
	Zatim od korisnika zahtijevate unos toliko brojeva. Program treba 
	nakon što je korisnik unio sve brojeve ispisati uzastopno 
	vrijednosti korijena tih brojeva. Vrijednost korijena negativnog 
	broja ispisite kao u obliku imaginarnih brojeva na matematicki 
	ispravan nacin (ovo mozete rijesiti pomocu jednog if-else-iskaza).
*/

int main()
{
	int x; //broj unosa velicine niza
	const int v = 50; //velicina niza

	do
	{
		cout << "Unesite velicinu niza (1-50): ";
		cin >> x;
	} while (x > 50 || x < 0);
	
	double niz[50];

	for (int i = 0; i < x; i++)
	{
		cout << "niz[" << i << "]: ";
		cin >> niz[i];
	}

	cout << "=========================\n";
	
	for (int i = 0; i < x; i++)
	{
		if (niz[i] < 0)
			cout << i << ": " << setprecision(3) << sqrt(-niz[i]) << "i\n";
		else
			cout << i << ": " << setprecision(3) << sqrt(niz[i]) << endl;
	}

	system("pause");
	return 0;
}