#include <iostream>
using namespace std;

/*
	Napisite program koji ce omoguciti upotrebu funkcije Predstavljanje. 
*/

void predstavljanje();

int main()
{
	cout << "Dobar dan!\n";
	predstavljanje();
	cout << "Zelim vam ugodan dan!\n";

	system("pause");
	return 0;
}

void predstavljanje()
{
	cout << "Dobro dosli u program koji koristi void funkciju!\n";
	cout << "Program napiso: Ime i Prezime\n";
}