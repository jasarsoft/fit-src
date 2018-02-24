#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisati program koji ce koristiti funkciju za izracunavanje kvadrata brojeva od 0 do 20. 
*/

int kvadrat(int);

int main()
{
	for (int i = 0; i <= 20; i++)
	{
		cout << setw(2) << i << " na kvadrat = " << setw(4) << kvadrat(i) << endl;
	}

	system("pause");
	return 0;
}

int kvadrat(int x)
{
	return x * x;
}