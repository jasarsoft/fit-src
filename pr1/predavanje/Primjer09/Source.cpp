//counter-controlled repetiotion

#include <iostream>
using namespace std;

int main()
{
	int brojac = 1; //inicijalizacija

	while (brojac <= 10) //uvijet ponavljanja
	{
		cout << brojac << endl;
		++brojac; //inkrement
	}

	system("pause");
	return 0;
}