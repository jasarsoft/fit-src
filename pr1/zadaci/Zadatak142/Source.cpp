#include <iostream>
using namespace std;

/*
	Zadatak 131: 
	Napravite program u kome ce te deklarisati tri varijable (a, b i c) tipa integer.  
	-  varijabli a dodijelite neku vrijednost hexadecimalnom obliku 
	-  varijabli b dodijelite neku vrijednost oktalnom obliku 
	-  varijabli c dodijelite neku vrijednost decimalnom obliku 
	-  ispisite vrijednost varijabli a, b i c u decimalnom obliku 
*/

int main()
{
	int a, b, c;

	a = 0xC7;
	b = 047;
	c = 10;

	cout << "a = " << dec << a << endl;
	cout << "b = " << dec << b << endl;
	cout << "c = " << dec << c << endl;

	system("pause");
	return 0;
}