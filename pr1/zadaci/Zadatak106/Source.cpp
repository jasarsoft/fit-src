#include <iostream>
using namespace std;

/*
	Prepraviti prethodni program tako da u glavnoj funkciji main zahtijevate od korisnika da 
	unese dva cijela broja - m za pocetak i n za kraj niza, zatim jos dva cijela broja - a i b. 
	Program treba da pomocu funkcije f1: 
	-  ispise sa koliko brojeva iz niza [m, n] je djeljiv broj a  
	-  ispise sa koliko brojeva iz niza [m, n] je djeljiv broj b  
*/

void f1(int m, int n, int a, int b)
{
	int x, y;

	x = y = 0; //djeljiv sa a (x); djeljiv sa b (y)

	for (int i = m; i <= n; i++)
	{
		if (i % a == 0)
		{
			//cout << "Broj " << i << " je djeljiv sa " << a << endl;
			x++;
		}
			
		if (i % b == 0)
		{
			//cout << "Broj " << i << " je djeljiv sa " << b << endl;
			y++;
		}
	}

	cout << "Djeljivo u nizu [" << m << "," << n << "] sa " << a << " je: " << x << endl;
	cout << "Djeljivo u nizu [" << m << "," << n << "] sa " << b << " je: " << y << endl;
}

int main()
{
	int m, n; //granice niza brojeva
	int a, b; //djeljivi brojevi za ispitivanje

	cout << "Unesite donju granicu m: ";
	cin >> m;
	cout << "Unesite gornju granicu n: ";
	cin >> n;

	if (m > n)
	{
		cout << "Donja granica mora biti veca od gornje!\n";
		system("pause");
		return 1;
	}

	if (m <= 0 || n <= 0)
	{
		cout << "Granice moraju biti pozitivne!\n";
		system("pause");
		return 2;
	}

	cout << "Unesite prvi broj za ispitivanje djeljivosti a: ";
	cin >> a;
	cout << "Unesite drugi broj za ispitivanje djeljivosti b: ";
	cin >> b;

	if (a <= 0 || b <= 0)
	{
		cout << "Brojevi moraju biti pozivini i veci od nule!\n";
		system("pause");
		return 3;
	}

	cout << endl;
	f1(m, n, a, b);
	cout << endl;

	system("pause");
	return 0;
}