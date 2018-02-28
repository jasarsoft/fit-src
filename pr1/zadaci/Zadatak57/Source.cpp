#include <iostream>
using namespace std;

/*
	Prethodni zadatak rijesite pomocu switch-iskaza, tako što cete prepraviti if-else-iskaze u 
	switch-iskaz.
*/

int main()
{
	int ocjena;

	cout << "Unesite ocjenu: ";
	cin >> ocjena;

	cout << "Ispis: ";

	switch (ocjena)
	{
	case 1:
		cout << "lose";
		break;
	case 2:
		cout << "zadovoljava";
		break;
	case 3:
		cout << "dobro";
		break;
	case 4:
		cout << "vrlo dobro";
		break;
	case 5:
		cout << "odlicno";
		break;
	default:
		cout << "to nije ocjena";
		break;
	}

	cout << endl << endl;

	system("pause");
	return 0;
}