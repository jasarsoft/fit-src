#include <iostream>
using namespace std;

/*
	Napravite program u kome cete od korisnika zahtijevati da unese procenat uspjesnosti (0 do  100)
	u varijablu p tipa int. Program treba ispisati „lose“, „dobro“, „vrlo dobro“ ili „odlicno“. 
*/

int main()
{
	int p;

	cout << "Unesite procenat uspjesnosti (0-100): ";
	cin >> p;

	if (p < 0 || p > 100)
	{
		cout << "Vrijednost procenta je pogresna.\n";
	}
	else
	{
		int x = (--p / 25);

		switch (x)
		{
		case 0:
			cout << "lose";
			break;
		case 1:
			cout << "dobro";
			break;
		case 2:
			cout << "vrlo dobro";
			break;
		case 3:
			cout << "odlicno";
			break;
		}

		cout << endl;
	}

	system("pause");
	return 0;
}