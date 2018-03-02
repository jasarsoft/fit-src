#include <iostream>
using namespace std;

/*
	Napravite program koji ce racunati aritmeticku sredinu brojeva od 1 do 100, ali 
	izuzimajuci brojeve od 40 do 60. 
	Znaci, potrebno je izracunati aritmeticku sredinu za brojeve: 
	1, 2, 3, ..., 37, 38, 39, 61, 62, 63, ..., 99, 100 
*/

int main()
{
	int broj = 0; //brojac
	int suma = 0;

	for (int i = 1; i < 100; i++)
	{
		if (i >= 40 && i <= 60)
			continue;

		suma += i;
		broj++;
	}

	cout << "Arimeticka sredina: " << suma / float(broj) << endl;
	
	system("pause");
	return 0;
}