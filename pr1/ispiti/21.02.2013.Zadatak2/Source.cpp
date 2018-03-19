#include <iostream>
using namespace std;

/*	Ispit 21.02.2013. Zadatak 2
	
	Napisite program koji omogucava unos dva cijela broja, a izracunava i ispisuje najveci
	zajednicki djeljitelj ta dva broja. Upotrijebite funkciju:
	void najveci_zajednicki_djelitelj(int, int, int &);

	Unos brojeva kao i ispis najveceg zajednickog djeljitelja vrsiti u funkciji main.
	U slucaju da brojevi nemaju niti jednog zajednickog djelitelja ispisite odgovarajucu poruku.

	npr: najveci zajendnici djeljitelj brojeva 10 i 15 je 5;
*/

void najveci_zajednicki_djelitelj(int, int, int &);

int main()
{
	int b1, b2, djel = 1;

	cout << "Unesite broj 1: ";
	cin >> b1;
	cout << "Unesite broj 2: ";
	cin >> b2;

	najveci_zajednicki_djelitelj(b1, b2, djel);
	if (djel == 1)
		cout << "Brojevi nemaj najveci zajednicki djelitelj\n";
	else
		cout << "Djelitelj brojeva " << b1 << " i " << b2 << " je " << djel << endl;

	system("pause");
	return 0;
}

void najveci_zajednicki_djelitelj(int broj1, int broj2, int& djelitelj)
{
	int max = broj1 >= broj2 ? broj1 : broj2;

	for (int i = 2; i <= max; i++)
	{
		if (broj1 % i == 0 && broj2 % i == 0)
		{
			djelitelj = i;
			break;
		}
	}
}