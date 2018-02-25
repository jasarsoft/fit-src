#include <iostream>
#include <iomanip>
using namespace std;

/*
	Dat je dvodimenzionalni niz (matrica 3x4) OcjeneStudenata. Svaki red predstavlja studenta, a svaka kolona 
	predstavlja ocjenu koju je student postigao na ispitima. Definirajte i upotrijebite: 
 
	funkciju koja ce omoguæi unos ocjena za svakog studenta; 
	funkciju za ispis svih ocjena; 
	funkciju koja ce naci najmanju ocjenu; 
	funkciju koja naci najvecu ocjenu; 
	funkciju koja ce izracunati prosjecnu ocjenu za svakog studenta. 
*/

const int studenti = 3, ispiti = 4;

int minimum(int[][ispiti]);
int maximum(int[][ispiti]);
float prosjek(int[], int);
void unos(int[][ispiti]);
void ispis(int[][ispiti]);

int main()
{
	int najmanja, najveca;
	int ocjene_studenta[studenti][ispiti];

	cout << "Unesite ocjene studenta\n";
	unos(ocjene_studenta);

	cout << "\nNiz sadrzi sljedece elemente:\n";
	ispis(ocjene_studenta);

	najmanja = minimum(ocjene_studenta);
	if (najmanja < 11)
		cout << "\nNajniza ocjena: " << najmanja << endl;

	najveca = maximum(ocjene_studenta);
	if (najveca > 5)
		cout << "Najveca ocjena: " << najveca << endl;


	for (int i = 0; i < studenti; i++)
	{
		cout << "Prosjecna ocjena studenta " << i << " je: ";
		cout << showpoint << setprecision(2) << prosjek(ocjene_studenta[i], ispiti) << endl;
	}
		
	system("pause");
	return 0;
}

void unos(int ocjene[][ispiti])
{
	for (int i = 0; i < studenti; i++)
	{
		for (int j = 0; j < ispiti; j++)
		{
			cout << "Student " << i << " ocjena " << j << " : ";
			cin >> ocjene[i][j];
			if (ocjene[i][j] < 6 || ocjene[i][j] > 10)
			{
				cout << "Ocjena mora biti izmedju 6 i 10!\n";
				j--;
			}
		}
	}
}

void ispis(int ocjena[][ispiti])
{
	for (int i = 0; i < studenti; i++)
	{
		cout << "\nOcjene studenta [" << i << "]: ";
		for (int j = 0; j < ispiti; j++)
			cout << setw(3) << ocjena[i][j];
	}
}

int minimum(int ocjena[][ispiti])
{
	int min = 10;

	for (int i = 0; i < studenti; i++)
	{
		for (int j = 0; j < ispiti; j++)
		{
			if (ocjena[i][j] < min)
				min = ocjena[i][j];
		}
	}

	return min;
}

int maximum(int ocjena[][ispiti])
{
	int max = 5;

	for (int i = 0; i < studenti; i++)
	{
		for (int j = 0; j < ispiti; j++)
		{
			if (ocjena[i][j] > max)
				max = ocjena[i][j];
		}
	}

	return max;
}

float prosjek(int sveocjene[], int testovi)
{
	int total = 0;

	for (int i = 0; i < testovi; i++)
		total += sveocjene[i];

	return float(total) / testovi;
}