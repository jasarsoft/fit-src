#include <iostream>
#include <iomanip>
using namespace std;

/*
Potrebno je kontrolirati tri vrijednost: broj redaka, broj znakova u svakom
retku i broj praznih mjesta u svakom retku (no, to ne znaci da su potrebne tri for petlje).
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
		for (int j = visina; j >= 1; j--)
		{
			if (i <= j)
				cout << " ";
			else
				cout << znak;
		}

		cout << endl;
	}

	system("pause");
	return 0;
}