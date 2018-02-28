#include <iostream>
using namespace std;

/*
	Napravite program koji ce od korisnika zahtijevati unos ocjene od 1 do 5 i koji ce na osnovu 
	nje ispisati „lose“, „zadovoljava“, „dobro“, „vrlo dobro“, „odlicno“ ili „to nije ocjena“. 
	Program rijesite pomocu pet if-else-iskaza. 
	Koristite varijablu tipa int za ocjenu. 
	
	Program rijesite na dva naèina: 
	a)  koristici dodatne vitièaste zagrade u if-else-iskazima 
	b)  bez koristenja viticastih zagrada u if-else-iskazima 
	Nemojte zaboraviti uvlaciti if-iskaze. Bilo bi fino kad bi svaka naredba (u ovom slucaju if-
	iskaz) bila uvucena za jedan tabulator u odnosu na if-iskaz kome pripada. 
*/

int main()
{
	int ocjena;

	cout << "Unesite ocjenu: ";
	cin >> ocjena;

	if (ocjena == 1)
		cout << "Ispis: lose\n";
	else if (ocjena == 2)
		cout << "Ispis: zadovoljava\n";
	else if (ocjena == 3)
		cout << "Ispis: dobro\n";
	else if (ocjena == 4)
		cout << "Ispis: vrlo dobro\n";
	else if (ocjena == 5)
		cout << "ispis: odlicno\n";
	else
		cout << "Ispis: to nije ocjena\n";

	system("pause");
	return 0;
}