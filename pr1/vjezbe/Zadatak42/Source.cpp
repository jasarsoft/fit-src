#include <iostream>
using namespace std;

/*
	Napisite program koji ce ispisati pozdravnu poruku onoliko puta koliko korisnik zeli. 
	Obavezno koristite funkcije. 
 
	Napomena: Problem mozete rijesiti na vise nacina. Jedna od mogucnosti je da prosijedite 
	broj ponavljanju u funkciju kao parametar; a nakon toga u tijelu funkcije koristite petlju koja 
	ce ponavljati pozdrav zeljeni broj puta.
*/

void pozdrav(int);

int main()
{
	int poz;

	cout << "Koliko zelite puta ponovit pozdrav: ";
	cin >> poz;

	pozdrav(poz);

	system("pause");
	return 0;
}

void pozdrav(int p)
{
	for (int i = 1; i <= p; i++)
		cout << "\tPozdrav\t\n";
}