#include<iostream>
using namespace std;

/*
	broj dana od pocetka godine
*/


int main()
{
	int datum[3];
	int mjesec[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cout << "Unesite datum (dan, mjesec, godina): ";
	for (int i = 0; i < 3; i++)
		cin >> datum[i];
	cout << endl;

	if (datum[2] % 4 == 0 && (datum[2] % 100 != 0 && datum[2] % 4 == 0)) //prestupna godina
		mjesec[1] = 29;

	int suma = datum[0];
	for (int i = 0; i < datum[1] - 1; i++) //datum[1] - 1 jer krece i od 0
		suma += mjesec[i];

	cout << "Od 01.01." << datum[2] << " do " << ". " << datum[1];
	cout << "." << datum[2] << "." << " proslo je " << suma << " dana.\n";

	system("pause");
	return 0;
}