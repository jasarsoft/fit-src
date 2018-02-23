#include <iostream>
using namespace std;

/*
	Napisite program koji ce omoguciti unos pozitivnih cijelih brojeva, te izracunati 
	njihovu sumu. U trenutku kad korisnik unese negativan broj, program treba ispisati 
	izracunatu sumu (ne racunajuci taj negativni broj) i zavrsiti s radom.  
*/

int main()
{
	int broj;
	int suma = 0;
	
	cout << "Unesite brojeve koji ce biti zbrojeni (negativan oznacava prekid)\n";

	cout << "Broj: ";
	cin >> broj;

	while (broj >= 0)
	{
		suma += broj;
		cout << "Broj: ";
		cin >> broj;
	}
	
	cout << "\nSuma uneseni brojeva je: " << suma << endl;

	system("pause");
	return 0;
}