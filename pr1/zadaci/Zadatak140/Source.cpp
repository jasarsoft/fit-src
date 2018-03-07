#include <iostream>
using namespace std;

/*
	Zadatak 129: 
	Rijesite prethodni program pomocu tri ugnijezdjene for-petlje! Nacrtajte dijagram toka i 
	na osnovu njega napisite C++ kod.
*/

int main()
{
	int brojac = 0;

	for (int s = 1; s <= 9; s++)
	{
		for (int d = 0; d <= 9; d++)
		{
			for (int j = 0; j <= 9; j++)
			{
				if ((s * 100 + d * 10 + j) % (s + d + j) == 0)
				{
					brojac++;
					cout <<s<<d<<j<< endl;
				}
			}
		}
	}

	cout << "Ukupno djeljivi brojeva sa sumom svoji cifara ima: " << brojac << endl;

	system("pause");
	return 0;
}