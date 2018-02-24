#include <iostream>
using namespace std;

/*
	Napisite funkciju povecaj ciji je zadatak da uvecava vrijednost cjelobrojne varijable  
	koja joj je proslijedjena kao parametar. 
*/

void povecaj(int &);

int main()
{
	int param;

	cout << "Unesite vrijednost parametra: ";
	cin >> param;

	povecaj(param);
	cout << "Vrijednost parametra je: " << param << endl;

	system("pause");
	return 0;
}

void povecaj(int &x)
{
	x++;
}