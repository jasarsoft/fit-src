#include <iostream>
using namespace std;

/*
	Napravite program u kome cete od korisnika zahtijevati unos dva broja. Neka to budu 
	varijable a i b tipa integer. Program treba, ako je prvi broj veci od drugog, ispisati 
	poruku: 'prvi broj je veci od drugog', inace treba ispisati 'prvi broj nije veci od 
	drugog'. Koristite jedan if-else iskaz (dvostruki if-iskaz). Na kraju, program treba ispisati 
	poruku 'Kraj programa' pomocu naredbe koja se nalazi izvan if-else iskaza. 
*/

int main()
{
	int a, b;

	cout << "Unesite prvi broj a: ";
	cin >> a;

	cout << "Unesite drugi broj b: ";
	cin >> b;

	if (a > b)
		cout << "Prvi broj je veci od drugog\n";
	else
		cout << "Drugi broj je veci od drugog\n";

	cout << "Kraj prgrama.\n";

	system("pause");
	return 0;
}