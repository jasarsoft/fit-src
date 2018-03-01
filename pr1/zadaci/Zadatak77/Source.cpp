#include <iostream>
using namespace std;

/*
	Napravite program koji ce ispisati sljedece poruke
*/

int main()
{
	cout << "Pocetak programa!\n";

	for (int i = 0; i <= 5; i++)
	{
		cout << "Broj neuspjesnih pokusaja je " << i << endl;
	}

	cout << "Kraj programa!\n";

	system("pause");
	return 0;
}