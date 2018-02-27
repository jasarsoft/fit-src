#include <iostream>
using namespace std;

/*
Prepravite program iz zadatka 45(41) tako da koristite dva if-else-iskaza sa sljedecim
uslovima:
A.  (i >= 1601)
B.  (i <= 0)
*/

int main()
{
	int index;

	cout << "Unesite broj index-a: ";
	cin >> index;

	if (index >= 1601 || index <= 0)
		cout << "Broj index-a nije validan.\n";
	else
		cout << "Broj index-a je validan.\n";

	cout << "Kraj programa.\n";

	system("pause");
	return 0;
}