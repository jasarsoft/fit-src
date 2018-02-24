#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji upotrebom for petlji ispisuje geometrijski lik kvadrat/pravokutnik 
	uz pomoc nekog znaka. Omogucite korisniku da sam izabere zeljeni znak, sirinu i visinu 
	(Ako se odlucite za kvadrat - sirina ce biti jednaka visini.). 
*/

int main()
{
	char znak;
	int visina, sirina;

	cout << "Unesite znak: ";
	cin >> znak;

	cout << "Koliko polje zelite?\n";
	cin >> visina >> sirina;

	for (int i = 1; i <= visina; i++)
	{
		for (int j = 1; j <= sirina; j++)
			cout << znak << " ";

		cout << endl;
	}

	system("pause");
	return 0;
}