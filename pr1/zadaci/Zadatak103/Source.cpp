#include <iostream>
using namespace std;

/*
	Dovrsite sljedeci program tako da radi na sljedeci nacin: 

	Koliko puta zelis da ti nesto kazem? ... 3
	1. Peace be upon you!
	2. Peace be upon you!
	3. Peace be upon you!
	Kraj programa
*/

void neka_funkcija()
{
	cout << "Peace be upon you! \n";
}

void main()
{
	int n;
	cout << "Koliko puta zelis da ti nesto kazem? ... ";
	cin >> n;

	if (n <= 0)
	{
		cout << "Unesena vrijednost mora biti veca od nule.\n\n";
		system("pause");
		return;
	}

	for (int i = 0; i < n; i++)
	{
		neka_funkcija();
	}

	cout << endl << endl;
	system("pause");
}