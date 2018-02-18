#include <iostream>
using namespace std;

int main()
{
	//do-while petlja

	int broj = 145678, suma = 0; //inicijalizacija varijable broj i sume tipa integer

	do
	{
		cout << "broj = " << broj << endl;

		suma += broj % 10; //dodaj na sumu ostatak djeljenja broja sa 10; suma = suma + (broj % 10);
		cout << "Suma nakon modula sa 10: " << suma << endl;
		
		broj = broj / 10; //podjeli broj (cjelobrojno djeljenje) sa 10 i postavi u varijablu taj broj
		cout << "Broj nakon djeljenja: " << broj << endl << endl;
	} while (broj > 0); //uslov do-while petlje: da li je broj veci od 0

	system("pause");
	return 0;
}