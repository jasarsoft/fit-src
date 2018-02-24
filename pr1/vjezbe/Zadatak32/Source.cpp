#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji upotrebom for petlji i "\t" sekvence.

	Upute: Problem je moguce rijesiti na vise nacina. Evo jednog od njih:
	Upotrijebite dvije for petlje. Vanjska for petlja ce omoguciti promjenu vrijednosti broja N
	(od 1 do 5), a unutarnja for petlja ce omoguciti ispis vrijednosti 10*N, 100*N, 1000*N.
	Dakle, naredbe unutar vanjske for petlje ce se ponoviti 5 puta (vanjska for petlja
	kontrolira broj redaka), a naredbe u unutarnjoj for petlji æe se ponoviti 4 puta (j=1, 10,
	100, 1000) (unutarnja for petlja kontrolira ispis u jednom retku). Vrijednost brojaca u
	unutarnjoj for petlji æe pri svakom prolasku kroz petlju povecavati za 10 puta (j=j*10).
*/

int main()
{
	cout << "N\t10*N\t100*N\t1000*N\n\n";
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 1000; j *= 10)
			cout << i*j << "\t";

		cout << endl;
	}

	system("pause");
	return 0;
}