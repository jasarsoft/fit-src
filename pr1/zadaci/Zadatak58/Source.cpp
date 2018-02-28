#include <iostream>
using namespace std;

/*
	Prepravite program 61 tako da koristite varijablu tipa char umjesto int za ocjenu. 
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

	if (ocjena == '1')
		cout << "lose";
	else if (ocjena == '2')
		cout << "zadovoljava";
	else if (ocjena == '3')
		cout << "dobro";
	else if (ocjena == '4')
		cout << "vrlo dobro";
	else if (ocjena == '5')
		cout << "odlicno";
	else
		cout << "to nije ocjena";

	cout << endl << endl;

	system("pause");
	return 0;
}