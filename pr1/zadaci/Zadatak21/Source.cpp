#include <iostream>
using namespace std;

/*
	Napravite program koji ce zahtijevati unos vaseg imena. 
	Program treba vaše ime obrnuto ispisati na ekran. 

	Potrebno je uraditi sljedece korake:
	a)  potrebno je deklarisati onoliko varijabli koliko je dugo vase ime, neka se varijable
		zovu  a1, a2, ...
	b)  potrebno je sve vrijednosti (tj. slova) ucitati u odgovarajuce varijable pomocu
		jedne naredbe cin
		Krajnji korisnik nakon svakog unesenog slova moze pritisnuti tipku ENTER ili tipku
		za razmak, a moze ovdje i sva slova zajedno unijeti kao jednu spojenu rijec.
	c)  ispisite varijable na isti nacin kao sto ste cinili u prethodnom zadatku
*/

int main()
{
	//edin
	char a1, a2, a3, a4;

	cout << "Unesite slova imena redom (edin)\n";
	cin >> a1 >> a2 >> a3 >> a4;

	cout << a4 << a3 << a2 << a1 << endl;

	system("pause");
	return 0;
}