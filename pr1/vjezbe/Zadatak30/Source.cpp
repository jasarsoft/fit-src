#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji za uneseno n, izracunava i ispisuje sumu S=1!+2!+3!...+n! 
	Postujte sve faze procesa programiranja.

	Upute: U zadatku se trazi suma faktorijela do broja n (ukljucujuci i n). Pojam faktorijela
	vam je matematicki pojam – predstavlja umnozak prirodnih brojava. Faktorijel od npr. 3
	iznosi: 1*2*3=6. Dakle, potrebno je izracunati vrijednosti faktorijela za svaki prirodni
	broj do n, ali i zbrojiti sve dobivene vrijednosti.
*/

int main()
{
	int n, s = 0, faktorijel = 1;

	cout << "Unesite vrijednost broja n: ";
	cin >> n;

	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			faktorijel *= i;
			s += faktorijel;

			cout << i << "!";
			if (i < n) cout << "+";
		}
		cout << " = " << s << endl;
	}
	else
		cout << "Ne potoji faktorijel negativni brojeva!\n";

	system("pause");
	return 0;
}