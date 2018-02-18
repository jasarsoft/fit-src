/*
	Vecina  velikih  svjetskih  gradova  redovito  vrsi  mjerenja  zagadjenja  zraka. 
	Ocitavanja se vrse u 12:00 sati na tri razlicita mjesta u gradu. Prosjecna vrijednost ova 
	tri  ocitanja  se  naziva  indeks  zagadjenja.  Napisite  program  za  racunanje  indeksa 
	zagadjenja, te ispisite odgovarajuce poruke. Vrijednost indeksa zagadjenja veca ili jednaka 
	50 smatra se rizicnom, a vrijednost manja od 50 se smatra prihvatljivom. 
*/

#include <iostream>
using namespace std;

int main()
{
	float m1, m2, m3, indeks; //mjerenje zagadjenja i index
	const int BROJ_MJERENJA = 3;

	cout << "Unesite vrijednosti sva tri mjerenja\n";
	cin >> m1 >> m2 >> m3;

	indeks = (m1 + m2 + m3) / BROJ_MJERENJA;

	if (indeks >= 50)
		cout << "Iznos zagadjena je rizican i iznosi " << indeks;
	else
		cout << "Iznos zagadjenja je prihvatljiv i iznosi " << indeks;

	system("pause");
	return 0;
}