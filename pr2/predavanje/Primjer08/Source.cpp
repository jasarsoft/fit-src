#include<iostream>
using namespace std;

/*
	Prosjecna vrijendost
*/


int main()
{
	int suma = 0;
	float prosjek = 0.0F;
	const int max = 6;
	int ocjene[max] = { 6, 8, 8, 7, 10, 9 };
	cout << "Student je dobio sljedece ocjene: ";
	for (int i = 0; i < max; i++) {
		cout << ocjene[i] << " ";
		suma += ocjene[i];
	}

	prosjek = float(suma) / max;
	cout << "\nProsjecna ocjena je: " << prosjek << endl;

	system("pause");
	return 0;
}