#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program u kojem cete omoguciti unos niza od 7 iskljucivo veliki slova eng abecede
	pomocu funkcije unos(char[], int);
	definirati funkciju char posljednji(char[], int, int&); koja ce vratiti ona clan niza (slovo)
	koje se u abecednom poredtku pojavljuje posljenji;
	kao i na kojoj poziciji se u nizu nalazi to slovo;
*/

void unos(char[], int);
void ispis(char[], int);
char posljednji(char[], int, int&);

int main()
{
	const int v = 7; //duzina niza (velicina)
	char niz[v];
	int p = 0;

	unos(niz, v);
	cout << "\nIspis niza: ";
	ispis(niz, v);

	cout << "\nPosljenje slovo u abecednom poretku je: " << posljednji(niz, v, p) << endl;

	system("pause");
	return 0;
}

void unos(char n[], int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << "Unesite " << i + 1 << " slovo: ";
		if (n[i] < 'A' || n[i] > 'Z')
			i--;
	}
}

void ispis(char n[], int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << setw(3) << n[i];
	}
}

char posljednji(char n[], int v, int &p)
{
	p = 0;
	char tmp = n[0];

	for (int i = 0; i < v; i++)
	{
		if (n[i] > tmp)
		{
			tmp = n[i];
			p = i;
		}
	}

	return tmp;
}