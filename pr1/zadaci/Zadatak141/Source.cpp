#include <iostream>
using namespace std;

/*
	Zadatak 130: 
	Napravite program u kome cete inicijalizirati dvije varijable (a, b) tipa integer, a zatim te 
	vrijednosti varijabli zamijeniti i ispisati na ekran prvo u hexadecimalnom, pa u oktalnom,	
	a zatim u decimalnom brojnom sistemu. 
*/

int main()
{
	int a, b;

	a = 10;
	b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	int tmp = a;
	a = b;
	b = tmp;

	cout << "Hexadecimalno a: " << hex << a << endl;
	cout << "Hexadecimalno b: " << hex << b << endl;
	cout << "Oktalno a: " << oct << a << endl;
	cout << "Oktalno b: " << oct << b << endl;

	system("pause");
	return 0;
}