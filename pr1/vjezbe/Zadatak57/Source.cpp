#include <iostream>
#include <iomanip>
using namespace std;

/*
	Dopisite u prethodni program jos jednu funkciju koja ce modificirati pojedini element 
	niza u vrijednost dvostruko vecu od originalne. Element niza ce se u funkciju 
	prosljedjivati kao parametar po vrijednosti. 
*/

void modifikacija_niza(int[], int);
void modifikacija_elementa(int);


int main()
{
	int const size = 5;
	int niz[size] = { 0, 1, 2, 3, 4 };

	cout << "Efekat proslijeðivanja cijelog niza po refernci\n";
	cout << "Vrijednost orginalnog niza: ";
	for (int i = 0; i < size; i++)
		cout << setw(2) << niz[i];

	modifikacija_niza(niz, size);
	cout << "Vrijednost modificiranog niza: ";
	for (int i = 0; i < size; i++)
		cout << setw(2) << niz[i];

	cout << "\nEfekat proslijedjivanja jednog clana niza po vrijednosti\n";
	cout << "Vrijednost elementa niz[3] u glavnom programu " << niz[3] << endl;
	modifikacija_elementa(niz[3]);
	cout << "Vrijednost elementa niz[3] u glavnom programu " << niz[3] << endl; 

	system("pause");
	return 0;
}

void modifikacija_niza(int niz[], int size)
{
	for (int i = 0; i < size; i++)
		niz[i] *= 2;
}

void modifikacija_elementa(int e)
{
	cout << "Vrijednost elementa niz[3] u funkciji je " << (e *= 2) << endl;
}