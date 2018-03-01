#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji izracunava zbir parnih brojeva od 0 od 1000 koji su djeljivi sa 7 i 3 
	ili koji su djeljivi sa 8. Program treba, osim rezultata, da ispisuje i brojeve koji 
	zadovoljavaju uslov. Ispis sirine 5 mjesta.  
*/

int main()
{
	int i = 0;
	int suma = 0;

	while (i <= 1000)
	{
		if (i % 3 == 0 && i % 7 == 0 || i % 8 == 0)
		{
			cout << "Broj djeljiv sa 3 i 7 ili sa 8 je: " << setw(5) << i << endl;
			suma += i;
		}
			
		i++;
	}

	cout << "Suma brojeva djeljivi sa 3 i 7 ili 8 je: " << setw(5) << suma << endl;

	system("pause");
	return 0;
}