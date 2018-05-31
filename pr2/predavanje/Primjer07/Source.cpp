#include<iostream>
using namespace std;

/*
	Ucitavanj i ispis elemenata niza
*/


int main()
{
	const int max = 5;
	double niz[max];

	cout << "Upisite " << max << " brojeva: ";
	for (int i = 0; i < max; i++)
		cin >> niz[i];

	cout << "Upisali ste sljedece brojeve: ";
	for (int i = 0; i < max; i++)
		cout << niz[i] << "\t";

	system("pause");
	return 0;
}