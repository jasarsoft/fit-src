#include <iostream>
using namespace std;

/*
	Napravite program, slijedeci navedene zahtjeve: 
	a)  deklarisite varijablu pocetna tipa int i dodijelite joj vrijednost 15 
	b)  deklarisite varijablu d i ucitajte joj vrijednost sa tastature 
	c)  deklarisite varijablu e i dodijelite joj vrijednost pocetna * d 
	d)  ispisite vrijednost varijabe e 
	e)  uvecajte varijablu e za 1  
		(drugim rijecima: nova vrijednost e neka bude jednaka staroj vrijednosti e + 1) 
	f)  ispisite vrijednost varijable e 
	g)  kvadrirajte varijablu e  
		(drugim rijecima: novo e neka bude jedno staro e * staro e) 
	h)  ispisite vrijednost varijable e 
*/

int main()
{
	//a)  deklarisite varijablu pocetna tipa int i dodijelite joj vrijednost 15
	int pocetna = 10;

	//b)  deklarisite varijablu d i ucitajte joj vrijednost sa tastature
	int d;
	cout << "Unesite vrijednost varijable d: ";
	cin >> d;

	//c)  deklarisite varijablu e i dodijelite joj vrijednost pocetna * d 
	int e = pocetna * d;

	//d)  ispisite vrijednost varijabe e 
	cout << "Vrijednost varijable e je: " << e << endl;

	//e)  uvecajte varijablu e za 1
	e++;
	
	//f)  ispisite vrijednost varijable e 
	cout << "Vrijednost varijable e nakon uvecanja je: " << e << endl;

	//g)  kvadrirajte varijablu e  
	e *= e; //e = e * e;

	//h)  ispisite vrijednost varijable e
	cout << "Vrijednost varijable e nakon kvadriranja je: " << e << endl;

	system("pause");
	return 0;
}