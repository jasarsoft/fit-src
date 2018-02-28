#include <iostream>
using namespace std;

/*
	Prethodni zadatak rijesite pomoæu sest if-iskaza. 
*/

int main()
{
	int ocjena;

	cout << "Unesite ocjenu: ";
	cin >> ocjena;

	if (ocjena == 1)
		cout << "Ispis: lose\n";
	
	if (ocjena == 2)
		cout << "Ispis: zadvoljava\n";

	if (ocjena == 3)
		cout << "Ispis: dobro\n";

	if (ocjena == 4)
		cout << "Ispis: vrlo dobro\n";

	if (ocjena == 5)
		cout << "Ispis: odlicno\n";

	if (ocjena < 1 || ocjena > 5)
		cout << "Ispis: to nije ocjena\n";

	system("pause");
	return 0;
}