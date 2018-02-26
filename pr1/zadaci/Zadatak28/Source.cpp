#include <iostream>
using namespace std;

/*
	Napravite program koji ce zahtijevati unos vaseg imena upisano malim slovima. 
	Program treba vase ime ispisati obrnuto na ekran, ali sada velikim slovima. 
*/

int main()
{
	//edin
	char a1, a2, a3, a4;

	cout << "Unesite jedno po jedno malo slovo imena (edin)!\n";
	cin >> a1 >> a2 >> a3 >> a4;

	cout << "Obrnuto velika slova: " << char(a4 - 32) << char(a3 - 32) << char(a2 - 32) << char(a1 - 32) << endl;

	system("pause");
	return 0;
}