#include <iostream>
using namespace std;

/*
	Napravite program u kome ce te u funkciji f1() ispisati koliko ima brojeva (u opsegu od 
	1 do 10000)  koji su djeljivi sa 7  i koji ce u funkciji f2() ispisati koliko ima brojeva koji 
	su djeljivih sa 8 (u opsegu od 1 do 10000). 
*/

void f1()
{
	int n = 0;

	for (int i = 1; i <= 10000; i++)
	{
		if (i % 7 == 0)
		{
			//cout << "f1: Broj djeljiv sa 7 je: " << i << endl;
			n++;
		}
	}

	//cout << endl;
	cout << "Ukupno brojeva djeljivi sa 7 je: " << n << endl;
}

void f2()
{
	int n = 0;

	for (int i = 1; i <= 10000; i++)
	{
		if (i % 8 == 0)
		{
			//cout << "f2: Broj djeljiv sa 8 je: " << i << endl;
			n++;
		}
	}

	//cout << endl;
	cout << "Ukupno brojeva djeljivi sa 8 je: " << n << endl;
}

int main()
{
	f1();
	f2();

	cout << endl << endl;
	system("pause");
	return 0;
}