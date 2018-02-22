#include <iostream>
using namespace std;

//Zadatak: y = x^3

int Funkcija(int);

int main() {
	cout << "2 na trecu je " << Funkcija(2) << endl;
	cout << "3 na trecu je " << Funkcija(3) << endl;

	system("pause");
	return 0;
}

int Funkcija(int x)
{
	return x * x * x;
}