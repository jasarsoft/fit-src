#include <iostream>
#include <iomanip>
using namespace std;

/*	Ispit 21.02.2013. Zadatak 4

	Napisite program postujuci sve faze programiranja u kojem cete unijeti jedan prirodan broj
	koji predstavlja vrijeme u sekundama a izracunati i ispisati koliko je to vremena u satima
	minutama i sekundama.

	upotrijebite funkcije:
		int minute(int);
		int sati(int);
*/

int sati(int);
int minute(int);

int main()
{
	int sec;

	cout << "Unesite broj sekundi: ";
	cin >> sec;

	cout << sati(sec) << " sat ";
	cout << minute(sec) << " minuta i ";
	
	while (sec >= 60) sec %= 60;

	cout << sec << " sekundi.\n";

	system("pause");
	return 0;
}

int sati(int sec)
{
	int hour = 0;

	while (sec >= 3600)
	{
		hour += sec / 3600;
		sec %= 3600;
	}

	return hour;
}

int minute(int sec)
{
	int h, min = 0;

	h = sati(sec);
	if (h > 0)
		sec -= h * 3600;
	
	while (sec >= 60)
	{
		min += sec / 60;
		sec %= 60;
	}

	return min;
}