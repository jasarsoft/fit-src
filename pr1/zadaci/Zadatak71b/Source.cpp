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

	int i = 10, j = 1;

	while (i > 0)
	{
		cout << j << ". Brojim unazad: " << i << endl;
		i--;
		j++;
	}

	system("pause");
	return 0;
}