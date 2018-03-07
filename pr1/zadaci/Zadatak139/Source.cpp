#include <iostream>
using namespace std;

/*
	Napraviti program koji ce ispisati sve trocifrene brojeve koji su djeljivi sa sumom svojih 
	cifara, te utvrditi koliko ukupno ima takvih brojeva. 
*/

int main()
{
	int suma;
	int brojac = 0;

	for (int i = 100; i <= 999; i++)
	{
		suma = (i / 100) + (i % 100) / 10 + i % 10;
		if (i % suma == 0)
		{
			brojac++;
			cout << "Broj " << i << " je djeljiv sa sumom svoji cifara " << suma << endl;
		}
	}

	cout << "Ukupno djeljivi brojeva sa sumom svoji cifara ima: " << brojac << endl;

	system("pause");
	return 0;
}