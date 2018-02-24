#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisati C++ program koji ucitava vrijednosti prijedjenog puta u kilometrima, a zatim vrsi 
	konverziju u mjernu jedinicu po izboru korisnika: centimetre, milimetre, milje ili  stope. 
	Problem rijesiti pomocu funkcija! 

	1 milja = 1.60935 km
	1 stopa = 30.48 cm

	Upute:
	U tekstu zadatka se inzistira da rjesenje bude modularno,tj. sastavljeno od funkcija. Za
	svaku od mjernih jedinica upotrijebit ce se zasebna funkcija, funkciju za: za pretvaranje
	km u centimetre, za pretvaranje km u mm, za pretvaranje km u milje i za pretvaranje
	km u stope. Osim ovih funkcija bite ce kreirana jos jedna funkcija meni, u kojoj ce se
	samo ispisati koje od konverzija korisnik ima na raspolaganju.
*/

void menu();
double centimetri(double);
double milimetri(double);
double milje(double);
double stope(double);

int main()
{
	int izbor;
	double kilometri = 0;
	double duzina_cm = 0;
	double duzina_mm = 0;
	double duzina_milja = 0;
	double duzina_stopa = 0;

	menu();
	cin >> izbor;

	cout << "Unesi predjeni put u kilometrima: ";
	cin >> kilometri;

	if (kilometri > 0)
	{
		switch (izbor)
		{
		case 1:
			duzina_cm = centimetri(kilometri);
			cout << "Centimetara: " << setw(10) << duzina_cm << endl;
			break;
		case 2:
			duzina_mm = milimetri(kilometri);
			cout << "Milimetara: " << setw(10) << duzina_mm << endl;
			break;
		case 3:
			duzina_milja = milje(kilometri);
			cout << "Milja: " << setw(10) << duzina_milja << endl;
			break;
		case 4:
			duzina_stopa = stope(kilometri);
			cout << "Stopa: " << setw(10) << duzina_stopa << endl;
			break;
		default:
			cout << "Nepostojeca konverzija!\n";
			break;
		}
	}
	else
		cout << "Ne mozete unijeti vrijednost manju od 0!\n";

	system("pause");
	return 0;
}

void menu()
{
	cout << "Izaberite konverziju:\n";
	cout << "1. Kilometri u centimetre\n";
	cout << "2. Kilometri u milimetre\n";
	cout << "3. Kilometri u milje\n";
	cout << "4. Kilometri u stope\n";
}

double centimetri(double km)
{
	return km * pow(10.0, 5);
}

double milimetri(double km)
{
	return km * pow(10.0, 6);
}

double milje(double km)
{
	return km / 1.60935;
}

double stope(double km)
{
	return (km * 1000) / 0.3048;
}