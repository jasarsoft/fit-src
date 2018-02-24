#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji ce omoguciti ispis sljedeceg lika. Upotrijebite for petlje. 
	Omogucite korisniku da sam izabere zeljeni znak i visinu/sirinu lika. 
*/

int main()
{
	char znak;
	int visina;

	cout << "Unesi znak: ";
	cin >> znak;

	cout << "Unesi visinu lika: ";
	cin >> visina;

	for (int i = 1; i <= visina; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << znak;

		cout << endl;
	}

	system("pause");
	return 0;
}