#include <iostream>
using namespace std;

/*
	Napisite  program,  postujuci  sve  faze  procesa  programiranja,  koji  ce 
	omoguciti unos troznamenkastog cijelog broja, a ispisati srednju znamenku tog broja. 
*/

int main()
{
	int broj;

	cout << "Unesite troznamenkasti cijeli broj: ";
	cin >> broj;

	((broj >= 100) && (broj < 1000)) ?
		cout << "Srednja znamenka je " << (broj / 10) % 10 :
		cout << "Niste unijeli troznamenkast broj!\n";

	system("pause");
	return 0;
}