#include <iostream>
using namespace std;

/*
	Napisite program koji ce za uneseni broj provjeriti je li rijec o prostom ili slozenom broju
*/

int main()
{
	int n, i = 2;
	bool prost = true;

	cout << "Unesite broj: ";
	cin >> n;

	while (i <= (n/2))
	{
		if (i != n && n % i == 0)
		{
			prost = false;
			break;
		}
		i++;
	}

	if (prost)
		cout << "Broj je prost!\n";
	else
		cout << "Broj nije prost!\n";

	system("pause");
	return 0;
}