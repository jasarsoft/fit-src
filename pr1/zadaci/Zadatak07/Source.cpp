#include <iostream>
using namespace std;

/*
	Prepravite prethodni program, koristeci dalje vec deklarisanu varijablu pi iz prethodnog zadataka: 
	-  tako da se krajnjem korisniku ispise poruka 'Vrijednost za pi je 3.14' sa ispisom u 
		jedom redu konzolnog programa, a sa dvije cout-naredbe. 
	-  tako da se krajnjem korisniku ispise poruka 'Vrijednost kvadrata od pi je 9.85' sa 
		ispisom u jedom redu konzolnog programa, a sa dvije cout-naredbe. 
*/

int main()
{
	float pi = 3.14F;

	cout << "Vrijednost za pi je ";
	cout << pi << endl;

	cout << "Vrijednost kvadrata od pi je ";
	cout << pi * pi << endl;

	system("pause");
	return 0;
}