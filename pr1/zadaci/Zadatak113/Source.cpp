#include <iostream>
using namespace std;

/*
	Prepravljamo prethodni program:
	-	ostavite neizmijenjen prototip i definiciju funkcije ispisi_ako_je_prost
	-	u funkciji main unesite broj n na zahtjev korisnika (koliko puta zeli da ponovi program)
	-	u for-petlju dodajte poziv nove funkcije fx() koja nema parametara
	-	izvrsite for-petlju n puta

	Preporucujemo, nakon sto ste implementirali definiciju funkcije ispisi_ako_je_prost 
	i uspjesno testirali u prethodnom zadatku, da sakrijete tijelo funkcije. Ako koristite 
	Visual Studio 2003 ili 2005 ili 2008 to mozete uciniti jednim klikom na znak '-' 
	ispred funkcije.
	
	Sakrivanjem koda koji trenutno necete mijenjati, lakse cete moci odrzavati vas program, 
	a ujedno program postaje biti pregledniji. Implementirajte funkciju fx, tako da ona poziva 
	funkciju ispisi_ako_je_prost za svaki cijeli broj iz niza [m,n]. 
	Korisnik unosi brojeve m i n u funkciji fx.
*/

void fx();
void ispisi_ako_je_prost(int);

int main()
{
	int n;

	cout << "Koliko puta zelite ponoviti program: ";
	cin >> n;

	if (n <= 0)
	{
		cout << "Broj ponavljanja mora biti veci od nule.\n";
		system("pause");
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		cout << endl << endl;
		cout << "============== ";
		cout << i + 1;
		cout << " ==============";
		cout << endl;
		
		fx();
	}

	system("pause");
	return 0;
}

void ispisi_ako_je_prost(int broj)
{
	bool prost = true;

	for (int i = 2; i <= (broj / 2) + 1; i++)
	{
		if (broj % i == 0 && broj != i)
		{
			prost = false;
			break;
		}
	}

	if (prost)
		cout << "Broj " << broj << " je prost!\n";
	else
		cout << "Broj " << broj << " je slozen!\n";
}

void fx()
{
	int x, y;

	cout << "Unesite pocetak niza x: ";
	cin >> x;
	cout << "Unesite kraj niza y: ";
	cin >> y;

	if (x > y)
	{
		cout << "Pocetak mora biti veci od kraja.\n";
		system("pause");
		return;
	}
	if (x <= 0 || y <= 0)
	{
		cout << "Vrijednosti ne mogu biti manje ili jednake nuli.\n";
		system("pause");
		return;
	}

	for (int i = x; i <= y; i++)
	{
		ispisi_ako_je_prost(i);
	}
}