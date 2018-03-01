#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napravite petlju koja ce ispisati na ekran kvadratnu vrijednost svih neparnih brojeva od 
	10 do 30 i vrijednost korijena svih parnih brojeva od 10 do 30, na sljedeci nacin: 
*/

int main()
{
	for (int i = 10; i <= 30; i++)
	{
		if (i % 2 != 0) //i % 2 == 0
		{
			cout << "korijen broja " << i << " je: " << setprecision(3) << sqrt(i) << endl;
			cout << "kvadrat broja " << i << " je: " << pow(i, 2) << endl;
		}
	}

	system("pause");
	return 0;
}