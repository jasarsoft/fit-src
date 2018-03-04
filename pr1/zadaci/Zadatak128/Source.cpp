#include <iostream>
using namespace std;

/*
	Zadatak 117:
	Napravite program za racunanje rjesenja kvadratne jednacine, tako da koristite 
	funkcije fx1 i fx2 (funkcija fx1 racuna x1, a funkcija fx2 raèuna x2).
	
	...
*/

float f1(float, float, float);
float f2(float, float, float);

int main()
{
	float a, b, c;

	cout << "Unesite koeficijent a: ";
	cin >> a;
	cout << "Unesite koeficijent b: ";
	cin >> b;
	cout << "Unesite koeficijent c: ";
	cin >> c;

	float x1 = f1(a, b, c);
	cout << "Rjesenje kvadratne jednacine x1: " << x1 << endl;
	
	float x2 = f2(a, b, c);
	cout << "Rjesenje kvadratne jednacine x2: " << x2 << endl;

	system("pause");
	return 0;
}

float f1(float a, float b, float c)
{
	if (a == 0.0F)
	{
		cout << "Funkcija nema rjesnja.\n";
		return 0.0F;
	}

	float d = b * b - 4 * a * c;
	if (d < 0.0F)
	{
		cout << "Funkcija nema realnih rjesnjea.\n";
		return 0.0F;
	}

	return (-b + (float)sqrt(d)) / (2 * a);
}

float f2(float a, float b, float c)
{
	if (a == 0.0F)
	{
		cout << "Funkcija nema rjesnja.\n";
		return 0.0F;
	}

	float d = b * b - 4 * a * c;
	if (d < 0.0F)
	{
		cout << "Funkcija nema realnih rjesnjea.\n";
		return 0.0F;
	}

	return (-b - (float)sqrt(d)) / (2 * a);
}