#include <iostream>
using namespace std;

/*
	Napravite program koji ce ispisati poruke kao na slici koristeci do-while-petlju. 
	a)  brojac (varijabla) i bi se trebao mijenjati od 0 do 9 
	b)  brojac (varijabla) i bi se trebao mijenjati od 10 do 1 
*/

int main()
{
	cout << "Pocetak programa!\n";

	int i = 0;

	while (i <= 9)
	{
		cout << i + 1 << ". Brojim naprijed: " << i << endl;
		i++;
	}

	system("pause");
	return 0;
}