#include <iostream>
using namespace std;

/*
	Analizirajte sljedeci program. Koje ce poruke ispisati? 
*/

//REZULTAT: 12, 13, 13, 14, 14

int a = 10;  //globalna varijabla 

void neka_funkcija()
{
	a++;
	cout << "a = " << a << endl;
}

void main()
{
	a = 12;
	cout << "a = " << a << endl;

	neka_funkcija();

	cout << "a = " << a << endl;

	neka_funkcija();

	cout << "a = " << a << endl;
}