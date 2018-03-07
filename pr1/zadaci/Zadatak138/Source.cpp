#include <iostream>
using namespace std;

/*
	Optimizirajte prethodni program (nije bitno u kojoj vrsti petlje je rijec): 
*/

int main()
{
	int x;
	int brojac = 2;
	bool prost = true;

	cout << "Unesite broj: ";
	cin >> x;


	do
	{
		if (x % brojac == 0 && x != brojac)
		{
			prost = false;
			break;
		}

		brojac++;
	} while (brojac <= (x / 2));

	if (prost)
		cout << "Broj " << x << " je prost!\n";
	else
		cout << "Broj " << x << " nije prost.\n";

	system("pause");
	return 0;
}