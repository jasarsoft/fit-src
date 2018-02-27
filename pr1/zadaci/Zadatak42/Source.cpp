#include <iostream>
using namespace std;

/*
	Prepravite prethodni program tako da umjesto dva if-else-iskaza 
	koristite jedan if-else-iskaz, ali da ne mijenjate uslove nego ih samo spojite.
*/

int main()
{
	int index;

	cout << "Unesite broj index-a: ";
	cin >> index;

	if (index >= 1 && index <= 1600)
		cout << "Broj index-a je validan.\n";
	else
		cout << "Broj index-a nije validan.\n";

	cout << "Kraj programa.\n";

	system("pause");
	return 0;
}