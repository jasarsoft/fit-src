#include <iostream>
using namespace std;

/*
	Prepravite prethodni program tako da umjesto jednog if-else-iskaza (dvostrukog)
	koristite dva if-iskaza (jednostruka), Naredba za ispis neka se nalazi unutar if-iskaza.
*/

int main()
{
	int a, b;

	cout << "Unesite prvi broj a: ";
	cin >> a;

	cout << "Unesite drugi broj b: ";
	cin >> b;

	if (a > b)
		cout << "Prvi broj je veci od drugog\n";
	if (a < b)
		cout << "Drugi broj je veci od drugog\n";
	
	cout << "Kraj prgrama.\n";

	system("pause");
	return 0;
}