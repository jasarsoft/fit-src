#include <iostream>
using namespace std;

/*
	Prepravite prethodni primjer tako da koristite funkciju sa povratnom 
	vrijednoscu (funkcija koja nije void) pod imenom vol sa tri ulazna 
	parametra. Prepravite samo funkciju main. Kasnije cete dodati prototip 
	i definiciju funkcije vol. Dodajte u funkciju main jos jedan if-iskaz 
	koji ce, ako je zapremina veca od 1000, ispisati poruku „Bazen je velik!“. 
	
*/

int vol(int, int, int);

void main()
{
	int a, b, c;

	cout << "Unesi dimenzije bazena u metrima!\n";
	cout << "Sirina bazena a: ";
	cin >> a;
	cout << "Visina bazena b: ";
	cin >> b;
	cout << "Duzina bazena c: ";
	cin >> c;

	cout << "Zapremina u litrima iznosi: " << vol(a, b, c) << endl;

	system("pause");
}

int vol(int sirina, int visina, int dubina) { return (sirina * visina * dubina * 1000); }