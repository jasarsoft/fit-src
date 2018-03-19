#include <iostream>
#include <iomanip>
using namespace std;

/*	Ispit 21.02.2013. Zadatak 3

	Napisite program u kojem cete:
	- omoguciti unos niza od 7 iskljucivo mali slova pomocu funkcije void unos(char[], int);
	- definirati i upotrijbiti funkciju void promjeni(char[], int[], int);
		koja ce unesene karaktere(slova) promjeniti u odgovarajuce cijele brojeve (prema ASCII kodnoj
		semi) i smjestiti ih u zaseban niz;
	- definirati i upotrijebiti funkciju void binarni(int[], int); koja ce niz predhodno dobiveni cijeli
		brojeva pretvoriti u ekvivalenten binarne brojeve.

*/

int bin(int);
void unos(char[], int);
void promjeni(char[], int[], int);

int main()
{
	const int duzina = 7;
	char niz[duzina];

	cout << "Unesite niz od 7 mali slova:\n";
	unos(niz, duzina);
	
	//promjena slova u brojeve
	int brojevi[duzina];
	promjeni(niz, brojevi, duzina);

	cout << "\nPromjena brojeva u binarno:\n";
	for (int i = 0; i < duzina; i++)
	{
		cout << "Broj " << setw(4) << brojevi[i]; 
		cout << " binarno: " << setw(10) << bin(brojevi[i]) << endl;
	}

	system("pause");
	return 0;
}

int bin(int broj)
{
	int binarni, brojac;

	binarni = brojac = 0;
	while (broj > 0)
	{
		binarni +=(broj % 2) * (int)pow(10.0, brojac++);		
		broj /= 2;
	}

	return binarni;
}

void unos(char niz[], int duzina)
{

	for (int i = 0; i < duzina; i++)
	{
		cout << "Unesite malo slovo niza ";
		cout << setw(2) << (i + 1) << ": ";
		cin >> niz[i];
		if (niz[i] < 'a' || niz[i] > 'z')
			i--;
	}
}

void promjeni(char niz[], int novi[], int duzina)
{
	for (int i = 0; i < duzina; i++)
	{
		novi[i] = (int)niz[i];
	}
}