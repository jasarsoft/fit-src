#include <iostream>
using namespace std;

/*
	Opseg vazenja varijabli ilustrirat cemo primjerom
*/

void a();
void b();

int x = 1; //globalna varijabla

int main()
{
	int x = 5; //lokalna

	cout << "Lokalna varijabla x (vanjski blok): " << x << endl;

	{
		int x = 7; //lokalna varijabla unutanji blok
		cout << "Lokalna varijabla x (unutarnji blok): " << x << endl;
	}

	cout << "Lokalna varijabla x (vanjski blok): " << x << endl;

	a();
	b();
	a();
	b();

	system("pause");
	return 0;
}

void a()
{
	int x = 25;
	cout << "Lokalna varijabla x (na pocetku funkcije a): " << x << endl;
	x++;
	cout << "Lokalna varijabla x (na kraju funckije a): " << x << endl;
}

void b()
{
	cout << "Globalna varijabla x (na pocetku funckije b): " << x << endl;
	x *= 10;
	cout << "Globalna varijabla x (na kraju funckije b): " << x << endl;
}