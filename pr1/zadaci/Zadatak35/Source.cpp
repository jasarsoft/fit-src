#include <iostream>
using namespace std;

/*
	Prepravite prethodni program tako da se naredba za ispis poruke 'Kraj programa' nalazi 
	u if-else-iskazu, tj. jedna naredba za ispis u slucaju 'DA' i jedna naredba za ispis u 
	slucaju 'NE'.
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
	else if (a < b)
		cout << "Drugi broj je veci od drugog\n";
	else
		cout << "Kraj prgrama.\n";

	system("pause");
	return 0;
}