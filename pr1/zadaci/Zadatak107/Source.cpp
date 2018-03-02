#include <iostream>
using namespace std;

/*
	Napravite program u kome ce te, pomocu jedne funkcije, ispisati sumu parnih brojeva i 
	sumu kvadrata neparnih brojeva od m do n. U funkciji main cete od  korisnika traziti da 
	unese cijeli broj m za pocetak niza i n za kraj niza. 
*/

void parni(int m, int n)
{
	int sp, sn; //suma parni i suma neparni

	sp = sn = 0;

	for (int i = m; i <= n; i++)
	{
		if (i % 2 == 0)
			sp += i;
		else
			sn = i * i;
	}

	cout << "Suma parni brojeva [" << m << ", " << n << "]: " << sp << endl;
	cout << "Suma kvadrata neparni brojeva [" << m << ", " << n << "]: " << sn << endl;
}

int main()
{
	int m, n;

	cout << "Unesite pocetak niza m: ";
	cin >> m;
	cout << "Unesite kraj niza n: ";
	cin >> n;

	if (m < n)
	{
		cout << "Pocetak niza ne moze biti manji od kraja.\n";
		system("pause");
		return 1;
	}

	if (m <= 0 || n <= 0)
	{
		cout << "Vrijednost za niz m i n ne mogu biti manje ili jednake nuli.\n";
		system("pause");
		return 2;
	}

	parni(m, n);

	cout << endl;
	system("pause");
	return 0;
}