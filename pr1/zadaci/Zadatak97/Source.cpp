#include <iostream>
using namespace std;

/*
	Napisite program koji ce za uneseni broj provjeriti je li rijec o prostom ili slozenom broju;
*/

int main()
{
	int n;
	bool prost = true; //true jer broj 1 je prost;

	//manje je prosti brojeva pa cemo ici sa trazenjem da li je broj djeljiv sa nekim brojem
	//u intervalu do svoje polovine, te ako jest onda nije prost i time pretragu prekinut

	cout << "Unesite broj: ";
	cin >> n;

	if (n < 0)
	{
		cout << "Broj treba biti veci od nule.\n";
		system("pause");
		return 1;
	}

	for (int i = 2; i <= (n / 2) + 1; i++)
	{
		if (n % i == 0)
		{
			prost = false;
			break;
		}
	}

	cout << "Broj " << n << " je ";

	if (prost)
		cout << "prost";
	else
		cout << "nije prost";

	cout << endl << endl;

	system("pause");
	return 0;
}