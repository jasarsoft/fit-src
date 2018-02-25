#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program u kome cete deklarirati niz od 10 cijelih brojeva i u taj niz 
	smjestite vrijednosti koje ce unijeti korisnik preko tastature. Nakon unosa brojeva 
	program treba ispisati vrijednosti svih elemenata niza na ekran. 
*/

int main()
{
	const int velicina = 10;
	int niz[velicina];

	cout << "Unesite clanove niza(10)\n";
	for (int i = 0; i < 10; i++)
		cin >> niz[i];

	cout << "\nClanovi niza su:\n";
	for (int i = 0; i < 10; i++)
		cout << i << " clan niza je " << setw(3) << niz[i] << endl;

	system("pause");
	return 0;
}