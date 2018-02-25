#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program u kome cete deklarirati niz od 10 cijelih brojeva koristeci 
	unaprijed deklariranu konstantu. Niz inicijalizirajte vrijednostima parnih brojeva u 
	rasponu od 2 do 20. Na kraju program treba ispisati sve vrijednosti niza na ekran. 
*/

int main()
{
	const int velicina = 10;
	int niz[velicina];

	for (int i = 0; i < velicina; i++)
		niz[i] = 2 + 2 * i;

	cout << "Element " << setw(13) << "vrijednost\n";
	for (int i = 0; i < velicina; i++)
		cout << setw(7) << i << setw(13) << niz[i] << endl;


	system("pause");
	return 0;
}