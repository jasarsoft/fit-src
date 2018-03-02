#include <iostream>
using namespace std;

/*
	Napravite program koji ce pitati korisnika koliko zeli unijeti brojeva. Zatim program treba 
	zahtijevati unos toliko cijelih brojeva. Nakon sto je korisnik unio sve te brojeve, program 
	treba ispisati najveci uneseni broj. 
*/

int main()
{
	int n, broj;
	int najveci = INT32_MIN;

	cout << "Koliko zelite unijeti brojeva: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Unesite " << i + 1 << ". broj: ";
		cin >> broj;

		if (broj > najveci)
			najveci = broj;
	}

	cout << "Najveci unijeti broj je: " << najveci << endl;

	system("pause");
	return 0;
}