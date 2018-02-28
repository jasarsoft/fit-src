#include <iostream>
using namespace std;

/*
	Prepravite program iz zadatka 57 (50) tako da varijable za uslove upotrebljavate na gore 
	spomenuti naèin pod 2. 
	-----------------------------------------------------------------------------------------
	Napravite program koji ce ispisati da li je uneseni broj prihvacen.
	Broj je prihvacen ako je zadovoljio sljedeæe nabrojane uslove:
	1.  pozitivan
	2.  neparan (da nije djeljiv sa 2)
	3.  da nije trocifren (da nije u rasponu od 100 do 999)
	4.  da nije djeljiv sa 7

	Sljedeci brojevi spadaju u izuzetke, i oni se takode prihvacaju bez provjere prethodno
	navedenih uslova:
	5.  114
	6.  –99 do –33
	7.  brojevi djeljivi sa 19

	Preporucujemo da koristite sto vise varijabli tipa bool.
*/

int main()
{
	int broj;
	bool u1, u2, u3, u4, u5, u6, u7;

	cout << "Unesite broj: ";
	cin >> broj;

	if (broj >= 0)
		u1 = true;
	else
		u1 = false;

	if (broj % 2 != 0)
		u2 = true;
	else
		u2 = false;

	if (broj < 100 || broj > 999) // !(broj >= 100 && broj <= 999)
		u3 = true;
	else
		u3 = false;

	if (broj % 7 != 0)
		u4 = true;
	else
		u4 = false;

	if (broj == 114)
		u5 = true;
	else
		u5 = false;

	if (broj >= -99 && broj <= -33)
		u6 = true;
	else
		u6 = false;

	if (broj % 19 == 0)
		u7 = true;
	else
		u7 = false;


	if ((u1 && u2 && u3 && u4) || u5 || u6 || u7)
		cout << "Broj je prihvacen!\n";
	else
		cout << "Broj nije prihvacen!\n";

	system("pause");
	return 0;
}