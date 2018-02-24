#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
	Banka na pocetku svake godine ulagacima obracunava kamatu sa P procenata na 
	novcanu sumu koja je odlezala u toku prethodne godine. Napisite program, postujuci sve 
	faze procesa programiranja, kojim se uz koristenje funkcije kamata izracunava novcani 
	iznos kojim ce ulagac raspolagati poslije G godina ako je pocetno ulaganje S. 
	Pretpostavlja se da ulagac nece podizati novac u medjuvremenu. 
 
	Upute: bit ce potrebno unijeti visinu pologa, kamatnu stopu i broj godina; potrebno je 
	voditi racuna o tipovima podataka za sve ove vrijednosti, te nacinu na koji se obracunava 
	kamata; funkcija kamata ce izracunavati samo iznos za jednu godinu stednje; buduci da 
	se polog zapravo mijenja svake godine (polog+kamata za prethodnu godinu) funkciju ce 
	biti potrebno pozivati onoliko puta na koliko je godina stednja orocena; prema tekstu 
	zadatka je to moguce jer se kamata obracunava iskljucivo na godisnjoj razini, pa je broj 
	godina, a time i broj ponavljanja cjelobrojan. 
*/

double kamata(double, float);

int main()
{
	int g;		//godina
	float p;	//pologa
	double s;	//kamatna stopa

	do
	{
		cout << "Unesite visinu pologa: ";
		cin >> p;
		cout << "Unesite kamatnu stopu: ";
		cin >> s;
		cout << "Unesite broj godina: ";
		cin >> g;
	} while (s <= 0 || p <= 0 || g <= 0);

	for (int i = 1; i <= g; i++)
		s += kamata(s, p);

	cout << showpoint << "Na racunu nakon " << g << " godina imate iznos: " << s << "KM\n";

	system("pause");
	return 0;
}

double kamata(double kstopa, float pologa)
{
	return kstopa *(pologa / 100);
}