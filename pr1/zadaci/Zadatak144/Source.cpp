#include <iostream>
using namespace std;

/*
	Zadatak 133: 
	U zadatku 149 je koristenja funkcija ZbirKubova sa povratnom vrijednoscu i sa pozivom 
	pass-by-value. Prepravite funkciju u ZbirKubova2, tako da funkcija nema povratnu 
	vrijednost i da za izlaznu vrijednost iz funkcije koristite referencu (pass-by-reference). 
*/

void zbir_kubova(int, int, int &);

int main()
{
	int m, n;
	bool unos = true;

	do
	{
		cout << "Unesite m: ";
		cin >> m;
		cout << "Unesite n: ";
		cin >> n;

		int x;
		cout << "Unesite x: ";
		cin >> x;

		int suma;
		zbir_kubova(m, n, suma);
		int z = (suma) / (x*x);

		cout << "Rezultat: " << z << endl;

		char answer;
		cout << "Da li zelite ponoviti (d/n)? ";
		cin >> answer;
		answer == 'd' ? unos = true : unos = false;
	} while (unos);



	system("pause");
	return 0;
}

void zbir_kubova(int m, int n, int &suma)
{
	suma = 0;

	if (m <= 0 || n <= 0)
		return;
		
	if (m < n)
	{
		for (int i = m; i <= n; i++)
		{
			suma += i*i*i;
		}
	}
	else
	{
		for (int i = m; i <= n; i--)
		{
			suma += i*i*i;
		}
	}
}