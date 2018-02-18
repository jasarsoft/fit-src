/*
	Napisite program za jednostavnu igru pogadjanja brojeva 
	(u intervalu od 1 do 10).
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int pokusaj;
	
	srand((unsigned)time(0));
	int pogodak = rand() % 10 + 1;
	//na vrijednost koju funkcija rand vrati primjenjuje se cjelobrojno dijeljenje s 10
	//(ciji je moguci rezultat 0, 1, 2, 3, 4, 5, 6, 7, 8 i 9) te se dodaje + 1 
	//(kako bi se mogao dobiti i broj 10)

	cout << "Zamislio sam broj izmedju 1 i 10\n";
	cout << "Pokusajte pogoditi broj ";
	cin >> pokusaj;

	if (pokusaj == pogodak)
		cout << "Nevjerovatno, pogodili ste!\n";
	else
	{
		if (pokusaj > pogodak)
			cout << "Zao mi je niste pogodili, unijeli ste prevelik broj!\n";
		else
			cout << "Zao mi je niste pogodili, unije ste premali broj!\n";
	}
	cout << "Broj je: " << pogodak << endl;
	
	system("pause");
	return 0;
}