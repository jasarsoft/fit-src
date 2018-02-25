#include <iostream>
using namespace std;

/*
	Napravite program, slijedeci navedene zahtjeve: 
	a)  deklarisite varijablu pi tipa float i dodijelite joj vrijednost 3.14   
		(pazite: u C++-u se umjesto decimalnog zareza koristi tacka, isto kao u engleskom jeziku) 
	b)  ispisite poruku 'Vrijednost za pi je' 
	c)  ispisite vrijednost varijable pi u novom redu (u novom redu source koda a ne u 
		novom redu u konzolnom interfejsu kojeg vidi krajniji korisnik vaseg programa) 
	d)  ispiste poruku 'Vrijednost kvadrata od pi je' 
	e)  ispisite vrijednost pi^2  (to je pi*pi) 
*/

int main()
{
	float pi = 3.14F;

	cout << "Vrijednost za pi je: "; 
	
	cout << pi << endl;

	cout << "Vrijednost kvadrata od pi je: ";
	
	cout << pi * pi << endl;

	system("pause");
	return 0;
}