#include <iostream>
using namespace std;

/*
	Prepravite prethodni program iz zadatka 7:
	a)  tako da za ispis poruke 'Vrijednost za pi je 3.14' u jedom redu koristite samo
		jednu cout-naredbu umjesto dvije
	b)  tako da za ispis poruke 'Vrijednost kvadrata od pi je 9.85' u jedom redu koristite
		samo jednu cout-naredbu umjesto dvije
*/

int main()
{
	float pi = 3.14F;

	cout << "Vrijednost za pi je " << pi << endl;

	cout << "Vrijednost kvadrata od pi je " << pi * pi << endl;

	system("pause");
	return 0;
}