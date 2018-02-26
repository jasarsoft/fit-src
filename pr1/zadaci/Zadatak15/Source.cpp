#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napravite program, slijedeci navedene zahtjeve: 
	a)  zahtijevati unos poluprecnika i visine cilindra,  
		Pomoc: 
		Unos vrijednosti od korisnika mozete uciniti na 2 nacina tako sto cete: 
		1.  ispisati jednu poruku pomocu naredbe cout u kojoj cete zahtijevati unos dva 
			broja, a zatim cete ucitati oba broja upotrebno jedne naredbe cin ili dvije  
			cin naredbe 
		2.  ispisati jednu poruku uz pomoc naredbe cout u kojoj cete zahtijevati 
			unos jednog broja (poluprecnika h) a zatim cete ucitati taj broj sa 
			naredbom cin 
			ispisati jednu poruku uz pomoc cout naredbe u kojoj cete zahtijevati 
			unos jednog broja (visine r) a zatim cete ucitati taj broj upotrebom 
			naredbe cin 
	b)  izracunati povrsinu kruga P 
	c)  izracunati zapreminu cilindra V 
	d)  ispisati zapreminu V 
*/

int main()
{
	int poluprecnik, visina; //cilindar
	float povrsina, zapremina;


	cout <<"Unesite poluprecnik cilindra: ";
	cin >> poluprecnik;
	cout << "Unesite visinu cilindra: ";
	cin >> visina;

	povrsina = poluprecnik * poluprecnik * 3.14F;
	zapremina = povrsina * visina;

	cout << "Povrsina cilindra: " << povrsina << endl;
	cout << "Zapremina cilindra: " << zapremina << endl;

	system("pause");
	return 0;
}