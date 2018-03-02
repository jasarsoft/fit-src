#include <iostream>
using namespace std;

/*
	Napravite program koji ce pitati korisnika koliko zeli unijeti brojeva. Zatim program treba 
	zahtijevati unos toliko cijelih brojeva. Nakon sto je korisnik unio sve te brojeve, program 
	treba ispisati koliko ima neparnih brojeva i koliko ima negativnih brojeva. 
*/

int main()
{
	int n, broj; //broj kombinacija
	int neparan, negativan;

	neparan = negativan = 0;
	
	cout << "Koliko zelite brojeva unijeti: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Unesite " << i + 1 << ". broj: ";
		cin >> broj;
		
		if (broj < 0)
			negativan++;

		if (broj % 2 != 0)
			neparan++;
	}

	cout << "Naparni brojevi: " << neparan << endl;
	cout << "Negativni brojevi: " << negativan << endl;

	system("pause");
	return 0;
}