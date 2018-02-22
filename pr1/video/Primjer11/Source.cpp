#include <iostream>
using namespace std;

//PDV
double const IZNOS_PDV = 0.17;

double pdv(double); //deklaracija ili prototip funkcije

int main()
{
	double iznos;
	cin >> iznos;
	cout << "Ukupno cijena + PDV iznosi " << pdv(iznos) << endl;

	system("pause");
	return 0;
}

double pdv(double pare)
{
	return (pare + pare * IZNOS_PDV);
}