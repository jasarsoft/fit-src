#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program u kome cete deklarirati niz od 10 cijelih brojeva. Niz inicijalizirajte
	pri samoj deklaraciji. Nakon unosa brojeva program treba ispisati sve vrijednosti niza na ekran. 
*/

int main()
{
	const int velicina = 10;
	int niz[velicina] = { 9, 5, 4, 7, 2, 99, 16, 45, 67, 89 };

	for (int i = 0; i < velicina; i++)
		cout << i << " clan niza je " << setw(3) << niz[i] << endl;

	system("pause");
	return 0;
}