#include <iostream>
using namespace std;

/*
	Napravite program koji ce od krajnjeg korisnika zahtijevati unos tri vrijednosti koje 
	predstavljaju dimenzije jednog bazena (i pretpostavimo da se radi o metrima kao 
	mjernoj jedinici). Nakon sto je korisnik unio brojeve, program treba ispisati zapreminu 
	bazena u kubnim metrima i u litrama.
*/

int main()
{
	int a, b, c;
	int zapremina;

	cout << "Unesite sirinu bazena (m): ";
	cin >> a;
	cout << "Unesite visinu bazena (m): ";
	cin >> b;
	cout << "Unesite dubinu bazena (m): ";
	cin >> c;

	zapremina = a * b * c;
	cout << "\nZapremina bazena (m^3): " << zapremina << endl;
	cout << "Zapremina bazena u litrima: " << zapremina * 1000 << endl;

	system("pause");
	return 0;
}