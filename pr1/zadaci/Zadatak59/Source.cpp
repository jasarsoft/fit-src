#include <iostream>
using namespace std;

/*
	Prepravite program 63 tako da koristite varijablu tipa char umjesto int za ocjenu.
	----------------------------------------------------------------------------------
	Napravite program koji ce od korisnika zahtijevati unos ocjene od 1 do 5 i koji ce na osnovu
	nje ispisati „lose“, „zadovoljava“, „dobro“, „vrlo dobro“, „odlicno“ ili „to nije ocjena“.
	Program rijesite pomocu pet if-else-iskaza.
	Koristite varijablu tipa int za ocjenu.

	Program rijesite na dva nacina:
	a)  koristici dodatne vitièaste zagrade u if-else-iskazima
	b)  bez koristenja viticastih zagrada u if-else-iskazima
	Nemojte zaboraviti uvlaciti if-iskaze. Bilo bi fino kad bi svaka naredba (u ovom slucaju if-
	iskaz) bila uvucena za jedan tabulator u odnosu na if-iskaz kome pripada.
*/

int main()
{
	char ocjena;

	cout << "Unesite ocjenu: ";
	cin >> ocjena;

	cout << "Ispis: ";

	switch (ocjena)
	{
	case '1':
		cout << "lose";
		break;
	case '2':
		cout << "zadovoljava";
		break;
	case '3':
		cout << "dobro";
		break;
	case '4':
		cout << "vrlo dobro";
		break;
	case '5':
		cout << "odlicno";
		break;
	default:
		cout << "to nije ocjena";
		break;
	}

	cout << endl << endl;

	system("pause");
	return 0;
}