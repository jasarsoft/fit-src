#include <iostream>
using namespace std;

/*
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

	u1 = (broj >= 0);
	u2 = (broj % 2 != 0); //(broj % 2 == 1);
	u3 = (broj < 100 || broj > 999);
	u4 = (broj % 7 != 0);

	u5 = (broj == 114);
	u6 = (broj >= -99 && broj <= -33);
	u7 = (broj % 19 == 0);

	if ((u1 && u2 && u3 && u4) || u5 || u6 || u7)
		cout << "Broj je prihvacen!\n";
	else
		cout << "Broj nije prihvacen!\n";

	system("pause");
	return 0;
}