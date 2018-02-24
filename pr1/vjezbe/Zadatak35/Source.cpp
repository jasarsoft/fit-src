#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji ce omoguciti ispis sljedeceg lika. Upotrijebite for petlje. 
	Omogucite korisniku da sam izabere zeljeni znak i velicinu lika. 
*/

int main()
{
	char znak;
	int visina;

	cout << "Unesite znak: ";
	cin >> znak;

	cout << "Unesite visinu lika: ";
	cin >> visina;

	for (int i = 1; i <= visina; i++)
	{
		for (int j = 1; j <= visina - i; j++)
			cout << znak;

		cout << endl;
	}

	system("pause");
	return 0;
}