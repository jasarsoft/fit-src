#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napravite program koji ce traziti od korisnika da unese broj n. Ako je n paran broj (tj. 
	djeljiv sa 2), program ce zahtijevati unos boja m. Program treba, u tom slucaju izracunati 
	vrijednost w = n/m i ispisati je na ekran. A ako je broj n neparan, program treba izracunati 
	vrijednost… 

	y = sqrt(n) za n >= 0
	y = a^2 * b
	
	…i ispisati tu vrijednost na ekran.  

	Program treba, od korisnika, traziti unos brojeva a i b samo ako bude potrebe.
	Pazite! U zadatku nije receno, ali se podrazumijeva, da vrijednost m mora biti razlicita od
	nule jer nije moguce dijeliti sa nulom. U slucaju da je broj m jednak nuli program treba
	ispisati neku poruku, kao: 'Greska: Nije moguce dijeliti sa 0' ili sl.
*/

int main()
{
	int n;

	cout << "Unesite broj n: ";
	cin >> n;

	if (n % 2 == 0)
	{
		int m;

		cout << "Unesite broj m: ";
		cin >> m;

		if (m == 0)
			cout << "Greska, nije moguce djeliti sa 0!\n";
		else
		{
			float w = float(n) / float(m);
			cout << "Vrijednost w je: " << w << endl;
		}
	}
	else
	{
		float y;

		if (n >= 0)
			y = (float)sqrt(n);
		else
		{
			int a, b;

			cout << "Unesite vrijednost a: ";
			cin >> a;

			cout << "Unesite vrijednost b: ";
			cin >> b;

			y = (float)pow(a, 2) * b;
		}
		
		cout << "Vrijednost y je: " << y << endl;
	}

	system("pause");
	return 0;
}