#include<iostream>
using namespace std;

/*

*/

struct Datum {
	int dan;
	int mjesec;
	int godina;
};

struct Proizvod {
	char sifra[30];
	char naziv[30];
	char proizvodjac[30];
	int godinaProizvodnje;
	float cijena;
	Datum upotrebljivoDo;
};


int main()
{
	Proizvod p1 = {
		"S12558B662",
		"Cokolada",
		"Milka",
		2014,
		2.25F,
		22, 5, 2016
	};

	strcpy_s(p1.naziv, "Milka2");

	cout << p1.sifra << endl;
	cout << p1.naziv << endl;
	cout << p1.proizvodjac << endl;
	cout << p1.godinaProizvodnje << endl;
	cout << p1.cijena << endl;
	cout << p1.upotrebljivoDo.dan << endl;
	cout << p1.upotrebljivoDo.mjesec << endl;
	cout << p1.upotrebljivoDo.godina << endl;

	system("pause");
	return 0;
}