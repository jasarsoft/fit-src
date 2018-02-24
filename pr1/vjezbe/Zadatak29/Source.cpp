#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program za izracunavanje prosjecne godisnje kolicine padalina. 
	Postujte sve faze procesa programiranja. 

	Upute: Prosjecna godisnja kolicina padalina se dobije zbrajanjem kolicine padalina za
	svaki mjesec i dijeljenjem s brojem mjeseci (12). Dakle, potrebno je omoguciti unos
	kolicine padalina 12 puta (za svaki mjesec), te unesene vrijednosti zbrojiti. Buduci da se
	odredena aktivnost (unos kolicine padalina) treba izvrsiti zadani broj puta (12) for petlja
	je idealan izbor.
*/

int main()
{
	int mjesec;
	double ukupno = 0.0, padaline, prosjek;

	for (mjesec = 1; mjesec <= 12; mjesec++)
	{
		cout << "Unesite kolicinu padalina za mjesec: ";
		cin >> padaline;
		ukupno += padaline;
	}

	prosjek = ukupno / 12;
	cout << "Prosjecna kolina padaline je " << setprecision(2) << prosjek << endl;

	system("pause");
	return 0;
}