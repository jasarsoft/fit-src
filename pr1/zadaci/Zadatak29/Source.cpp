#include <iostream>
#include <cmath>
using namespace std;

/*
	Napravite program koji ce zahtijevati unos dva broja (a i b) koja ce predstavljati duzine 
	kateta pravouglog trougla. Program treba ispisati duzinu stranice c (tj. hipotenuze). 
*/

int main()
{
	float a, b;

	cout << "Unesite duzinu stranice trogula a: ";
	cin >> a;
	cout << "Unesite duzinu stranice trougla b: ";
	cin >> b;

	float c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Duzina katete stranice trougla c: " << c << endl;

	system("pause");
	return 0;
}