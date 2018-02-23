#include <iostream>
using namespace std;

/*
	Napisite program, postujuci sve faze procesa programiranja, koji ce ispisati  
	koliko ima parnih, a koliko neparnih brojeva u intervalu od 15 do 99. 
*/

int main()
{
	int broj = 15;
	int parni = 0, neparni = 0;

	while (broj <= 99)
	{
		if (broj % 2 == 0)
			parni++;
		else
			neparni++;

		broj++;
	}

	cout << "U intervalu od 15 do 99 ima " << parni << " parni i " << neparni << " neparni brojeva.\n";

	system("pause");
	return 0;
}