#include <iostream>
using namespace std;

/*
	Napravite program u kome cete od korisnika zahtijevati da unese broj indeksa nekog 
	studenta FIT-a. Program treba ispisati da li je to validan broj indeksa (neka to budu 
	brojevi izmedju 1 i 1600, ukljucujuci i njih).  
	Program rijesite pomocu dva if-else-iskaza. 
	Program treba ispisati poruku "Kraj programa" pomocu naredbe cout koja se ne nalazi u 
	if-else-iskazima. 
*/

int main()
{
	int index;

	cout << "Unesite broj index-a: ";
	cin >> index;

	if (index >= 1)
	{
		if (index <= 1600)
			cout << "Broj index-a je validan.\n";
		else
			cout << "Broj index-a nije validan.\n";
	}
	else
		cout << "Broj index-a nije validan.\n";

	cout << "Kraj programa.\n";
	
	system("pause");
	return 0;
}