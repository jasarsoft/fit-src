#include <iostream>
using namespace std;

/*
	Napisite  program  koji  æe  omoguciti  unos  dva  cijela  broja,  usporediti  ih,  te 
	ispisati  veci  broj.  Obavezno  upotrijebite  uvjetni  operator.  Postujte  sve  faze  procesa 
	programiranja.
*/

//upotreba uvijetnog opertora	

int main()
{
	int broj1, broj2;

	cout << "Unesite dva cijela broja\n";
	cin >> broj1 >> broj2;
	
	// obratite paznju na operator >=; 
	//izabrali smo ovaj operator jer inace pri unosu dva 
	//ista broja program nece nista ispisati
	(broj1 >= broj2) ? cout << "Veci je " << broj1 : cout << "Veci je " << broj2;

	system("pause");
	return 0;
}