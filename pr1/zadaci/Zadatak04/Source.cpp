#include <iostream>
using namespace std;

/*
	Napravite program, slijedeci navedene zahtjeve: 
	a)  deklarisite varijablu a tipa int i dodjelite joj vrijednost 10 (u jednoj liniji kôda) 
	b)  deklarisite varijablu b tipa int, tako da joj ne dodijelite nikakvu vrijednost 
	c)  ucitajte neku vrijednost sa tastature u varijablu b 
		(za unos vrijednosti sa tastature korisite naredbu cin; 
		prije ucitavanje vrijednost sa tasture sa naredbom cin potrebno je krajnijem korisniku 
		ispisati neku uputnu poruku kao npr: 'Zdravo, unesite neki broj!' ,koristeci naredbu cout) 
	d)  deklarisite varijablu c tipa int i dodijelite joj vrijednost 15  
		(u dvije odvojene linije koda) 
	e)  deklarisite varijablu d tipa int i dodijelite joj vrijednost a+b+c 
	f)  ispisite (na ekran) vrijednost varijable d
*/

int main()
{
	int a = 10;
	int b;

	cout << "Unestie neki broj (b): ";
	cin >> b;

	int c;
	c = 15;

	int d = a + b + c;
	cout << "Vrijednost varijable d: " << d << endl;

	system("pause");
	return 0;
}