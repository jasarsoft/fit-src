#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji ce za unesenu cijenu proizvoda i kolicinu proizvoda racunati 
	ukupnu cijenu – tj. ispisati racun. Omogucite unos cijena i kolicine za vise proizvoda. 
	Upotrijebite funkciju koja se zove Racun i koja ne vraca nikakvu vrijednost (tipa void). 
	Ukupnu cijenu  ispisati u funkciji main.
*/

void racun(float, float, float &);

int main()
{
	char odgovor;
	float cijena, kolicina, ukupno = 0.0F;

	do
	{
		cout << "Cijena proizvoda: ";
		cin >> cijena;

		cout << "Kolicina: ";
		cin >> kolicina;

		racun(cijena, kolicina, ukupno);
		cout << "Zelite li jos nesto? ";
		cin >> odgovor;
	} while (odgovor == 'd' || odgovor == 'D');

	cout << "Ukupno za platiti: " << setprecision(2) << ukupno << endl;

	system("pause");
	return 0;
}

void racun(float cijena, float kolicina, float &ukupno)
{
	ukupno += cijena * kolicina;
}