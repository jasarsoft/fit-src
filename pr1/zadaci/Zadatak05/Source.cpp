#include <iostream>
using namespace std;

/*
	Napravite program, slijedeci navedene zahtjeve: 
	a)  deklarisite varijablu a1 tipa int i dodjelite joj vrijednost 10 (u dvije odvojene linije koda) 
	b)  deklarisite varijablu a2 tipa int i ucitajte joj vrijednost sa tastature 
	c)  deklarisite varijablu a3 tipa int i ucitajte joj vrijednost sa tastature 
	d)  deklarisite varijablu a4 tipa int i dodjelite joj vrijednost (a1 + a2 + a3) * 3 + 4 
	e)  deklarisite varijablu b1 tipa int i dodjelite joj vrijednost  a1^2 + 4*a2 - 10
	f)  ispisite vrijednost varijable a4 i varijable b
*/

int main()
{
	int a1;
	a1 = 10;

	int a2;
	cout << "Unesite vrijednost varijable a2: ";
	cin >> a2;

	int a3;
	cout << "Unesite vrijednost varijable a3: ";
	cin >> a3;

	int a4 = (a1 + a2 + a3) * 3 + 4;

	int b1 = (a1 * a1) + 4 * a2 - 10;

	cout << "Vrijednost varijable a4: " << a4 << endl;
	cout << "Vrijednost varijable b1: " << b1 << endl;

	system("pause");
	return 0;
}