#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
	Napisite program koji ce: 
		omoguciti unos niza 7 realnih brojeva pomocu funkcije: void unos(float[], int); te uraditi sljedece: 
		izracunati sumu kubova svih elemenata s neparnim indeksima uz pomoc funkcije: float sumakubova (float[], int); 
		ponaci najmanji pozitivni broj u nizu uz pomoc funkcije: float najmanjipoz(float [], int); 
		ponaci najveci negativni broj u nizu uz pomoc funkcije: float najvecineg(float [], int); 
	
	Ispis sume kubova, najmanjeg pozitivnog i najveceg negativnog broja vrsiti u funkciji main. 
*/

void unos(float[], int);
float sumakubova(float[], int);
float najmanjipoz(float[], int);
float najvecineg(float[], int);

int main()
{
	const int size = 7;
	float niz[size];

	cout << "Unesite niz 7 realnih brojeva:\n";
	unos(niz, size);

	cout << "\nSuma kubova neparnog indeksa clana niza: " << setprecision(2) <<  sumakubova(niz, size) << endl;
	cout << "Najmanji pozivini broj niza: " << najmanjipoz(niz, size) << endl;
	cout << "Najveci negativni broj niza: " << najvecineg(niz, size) << endl;

	system("pause");
	return 0;
}

void unos(float niz[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". clan niza: ";
		cin >> niz[i];
	}
}

float sumakubova(float niz[], int size)
{
	float suma = 0.0F;

	for (int i = 1; i < size; i += 2)
	{
		suma += pow(niz[i], 3);
	}

	return suma;
}

float najmanjipoz(float niz[], int size)
{
	float min = niz[0];

	for (int i = 0; i < size; i++)
	{
		if (niz[i] > 0 && niz[i] <= min)
			min = niz[i];
	}

	return min;
}

float najvecineg(float niz[], int size)
{
	float min = niz[0];

	for (int i = 0; i < size; i++)
	{
		if (niz[i] < 0 && niz[i] <= min)
			min = niz[i];
	}

	return min;
}