#include <iostream>
using namespace std;

/*
	Napišite program (prepravite program iz prethodnih workshop-ova) koji 
	ce koristeci funkciju ispisi_ako_je_prost ispisat proste brojeve iz datog raspona.  
*/

void ispisi_ako_je_prost(int);

int main()
{
	int x, y;
	int suma = 0;

	cout << "Unesite pocetak niza x: ";
	cin >> x;
	cout << "Unesite kraj niza y: ";
	cin >> y;

	if (x > y)
	{
		cout << "Pocetak mora biti veci od kraja.\n";
		system("pause");
		return 1;
	}
	if (x <= 0 || y <= 0)
	{
		cout << "Vrijednosti ne mogu biti manje ili jednake nuli.\n";
		system("pause");
		return 2;
	}

	for (int i = x; i <= y; i++)
	{
		ispisi_ako_je_prost(i);
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

	if(prost)
		cout << "Broj " << broj << " je prost!\n";
	else
		cout << "Broj " << broj << " je slozen!\n";
}