#include <iostream>
using namespace std;

/*
	Napravite program u kome ce te u funkciji f1() ispisati koliko ima brojeva (u opsegu od
	1 do 10000)  koji su djeljivi sa 7  i koji ce u funkciji f2() ispisati koliko ima brojeva koji
	su djeljivih sa 8 (u opsegu od 1 do 10000).
*/

void f1(int broj)
{
	int n = 0;

	for (int i = 1; i <= 10000; i++)
	{
		if (i % broj == 0)
		{
			//cout << "f1: Broj djeljiv sa 7 je: " << i << endl;
			n++;
		}
	}

	//cout << endl;
	cout << "Ukupno brojeva djeljivi sa " << broj << " je: " << n << endl;
}

int main()
{
	f1(7);
	f1(8);

	cout << endl << endl;
	system("pause");
	return 0;
}