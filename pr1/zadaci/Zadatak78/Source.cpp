#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napravite petlju koja ce ispisati na ekran parne trocifrene brojeve. 
*/

int main()
{
	cout << "Parni brojevi od 100 do 999:\n";

	for (int i = 100; i < 1000; i++)
	{
		if(i % 2 == 0)
			cout << "Broj: " << setw(4) << i << endl;
	}

	system("pause");
	return 0;
}