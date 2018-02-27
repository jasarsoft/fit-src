#include <iostream>
using namespace std;

/*
	Koristeci tabelu logickih operatora, prepravite program iz zadatka 46 tako 
	da umjesto jednog if-else-iskaza koristite dva if-iskaza, kao na slici 1. 
	Koristite logicke AND, OR ili NOT operatore? 
*/

int main()
{
	int index;

	cout << "Unesite broj index-a: ";
	cin >> index;

	if (index >= 1 && index <= 1600)
		cout << "Broj index-a je validan.\n";
	
	if (index < 1 || index > 1600)
		cout << "Broj index-a nije validan.\n";

	cout << "Kraj programa.\n";

	system("pause");
	return 0;
}