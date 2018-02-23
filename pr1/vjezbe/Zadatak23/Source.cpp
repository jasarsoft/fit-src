#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program, postujuci sve faze procesa programiranja, za ispis prirodnih brojeva 
	u intervalu od 1 do 100. Nakon svakog petog (5) broja potrebno je ispisati novi red. 
*/

int main()
{
	int broj = 1;

	while (broj <= 100)
	{
		cout << setw(4) << broj;
		if (broj % 5 == 0)
			cout << endl;

		broj++;
	}

	system("pause");
	return 0;
}