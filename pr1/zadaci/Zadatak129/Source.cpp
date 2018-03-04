#include <iostream>
using namespace std;

/*
	Zadatak 118:
	Prepravite prethodni program koristeci funkciju fx:

	void fx(float, float, float, float &, float &);  //ovo je samo prototip
*/

void fx(float, float, float, float &, float &);

int main()
{
	float a, b, c;

	cout << "Unesite koeficijent a: ";
	cin >> a;
	cout << "Unesite koeficijent b: ";
	cin >> b;
	cout << "Unesite koeficijent c: ";
	cin >> c;

	float x1, x2;
	fx(a, b, c, x1, x2);

	cout << "Rjesenje kvadratne jednacine x1: " << x1 << endl;
	cout << "Rjesenje kvadratne jednacine x2: " << x2 << endl;

	system("pause");
	return 0;
}

void fx(float a, float b, float c, float &x1, float &x2)
{
	if (a == 0.0F)
	{
		x1 = x2 = 0.F;
		cout << "Funkcija nema rjesnja.\n";
		return;
	}

	float d = b * b - 4 * a * c;
	if (d < 0.0F)
	{
		x1 = x2 = 0.F;
		cout << "Funkcija nema realnih rjesnjea.\n";
		return;
	}

	x1 = (-b + (float)sqrt(d)) / (2 * a);
	x2 = (-b - (float)sqrt(d)) / (2 * a);
}
