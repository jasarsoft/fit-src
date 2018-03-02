#include <iostream>
using namespace std;

/*
	Napravite program koji ce zahtijevati unos broja n. Program treba ispisati i izbrojiti sve 
	brojeve od 2 do 10 sa kojima je broj n djeljiv.
*/

int main()
{
	int n;
	int djeljiv = 0;

	cout << "Unesite broj n: ";
	cin >> n;

	for (int i = 2; i <= 10; i++)
	{
		if (n % i == 0)
		{
			djeljiv++;
			cout << djeljiv << ". Broj " << n << " je djeljiv sa " << i << endl;
		}
	}

	cout << "Broj " << n << " je djeljiv sa ukupno puta: " << djeljiv << endl;

	system("pause");
	return 0;
}