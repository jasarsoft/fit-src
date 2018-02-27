#include <iostream>
using namespace std;

/*
	Prepravite, na osnovu prethodnog zakljucka, program iz zadataka 49c tako da u if-
	iskazima ne koristite ni jedno logicko OR i logicko AND.  
*/

int main()
{
	int index;

	cout << "Unesite broj index-a: ";
	cin >> index;

	if (index >= 1)
	{
		if(index <= 1600)
			cout << "Broj index-a je validan.\n";
		else
			cout << "Broj index-a nije validan.\n";
	}
	else
	{
		cout << "Broj index-a nije validan.\n";
	}


	cout << "Kraj programa.\n";

	system("pause");
	return 0;
}