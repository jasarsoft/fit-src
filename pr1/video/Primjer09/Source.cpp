#include <iostream>
#include <iomanip>
using namespace std;

/*
	Biblioteka iomanip

	setw(width)				- prikazuje sljedecu vrijednost u polju specificne sirine
	boolalpha				- koristi slovnu prezentaciju logicki vrijednosti (true, false)
	noboolalpha				- iskljucuje slovnu prezentaciju logicki vrijednosti tj. pise za false 0 a za true 1 (defaultno je postaljvena)
	setprecision(value)		- prikazuje decimalnu vrijednost sa navedenom preciznoscu
	setiosflags(flaglist)	- postavlja oznake formata; flaglista moze biti lista oznaka odvojenih simbolom |
							- ios::showpoint (prikazuje decimalnu tacku i nule iza)
							- ios::fixed (prikazuje realne vrijednosti u formatu fiksog zareza)
							- ios::scientific (prikazuje realne vrijednosti u formatu kliznog/pokretnog zareza)
							- ios::left (prikazuje vrijednosti poravnate na lijevo)
							- ios::right (prikazuje vrijednosti poravnate na desno)
*/

int main()
{
	double alfa = 8.0 / 3.0, beta = 9.0 / 3.0;

	cout << alfa << endl; //2.66667
	cout << beta << endl; //3
	cout << endl;

	cout << alfa << endl; //2.6667
	cout << setiosflags(ios::showpoint) << beta << endl; //3.0000
	cout << endl;

	cout << setiosflags(ios::fixed) << setprecision(3) << alfa << endl; //2.667
	cout << setiosflags(ios::fixed) << setprecision(3) << beta << endl; //3.000
	cout << endl;

	bool varijabla = 0;
	cout << boolalpha << varijabla << endl; //false
	cout << noboolalpha << varijabla << endl; //0
	cout << endl;

	system("pause");
	return 0;
}