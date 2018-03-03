#include <iostream>
using namespace std;

/*
	Zadatak 104:
	Napraviti program koji ce od korisnika zahtjevati unos pet brojeva (a,b,c,d,e). 
	Potrebno je izracunati:

	y1 = sqrt(a);	za a>= 0
	y2 = log10(b);	za b > 0
	y3 = ln(x);		za b > 0
	y4 = cos(c);	(u radijanima c)
	y5 = sin(c);
	y6 = d^e;		(ako je d=0, onda e mora biti razlicito od 0)
*/

int main()
{
	float a, b, c, d, e;

	cout << "Unesite broj a: ";
	cin >> a;
	cout << "Unesite broj b: ";
	cin >> b;
	cout << "Unesite broj c: ";
	cin >> c;
	cout << "Unesite broj d: ";
	cin >> d;
	cout << "Unesite broj e: ";
	cin >> e;

	float y1, y2, y3, y4, y5, y6;

	cout << "Vrijednost y1 = ";
	if (a >= 0)
	{
		y1 = (float)sqrt(a);
		cout << y1 << endl;
	}
	else
		cout << "nije definisana za a < 0\n";

	cout << "Vrijednost y2 = ";
	if (b > 0)
	{
		y2 = (float)log10(b);
		cout << y2 << endl;

		cout << "Vrijednost y3 = ";
		y3 = (float)log(b);
		cout << y3 << endl;
	}
	else
	{
		cout << "nije definisana za b > 0\n";
		cout << "Vrijednost y3 = nije definisana\n";
	}


	cout << "Vrijednost y4 = ";
	y4 = (float)cos(c);
	cout << y4 << endl;

	cout << "Vrijednost y5 = ";
	y5 = (float)sin(c);
	cout << y5 << endl;

	cout << "Vrijednost y6 = ";
	if (d != 0 || e != 0)
	{
		y6 = (float)pow(d, e);
		cout << y6 << endl;
	}
	else
		cout << "nije definisano\n";

	system("pause");
	return 0;
}