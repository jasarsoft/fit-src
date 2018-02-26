#include <iostream>
using namespace std;

/*
	Napravite program koji ce zahtijevati od korisnika da unese neki decimalni broj r, a 
	program treba taj broj zaokruziti na cijeli broj (a ne odbaciti decimalni dio). Koristite istu 
	metodu kao rjesenje zadatka br. 17 (casting operator). U nastavku slijedi primjer: 
	Unos: 2.43  Ispis: 2 
	Unos: 2.76  Ispis: 3 
*/

int main()
{
	float r;

	cout << "Unesite decimalan broj r: ";
	cin >> r;

	cout << "Unos: " << r << "  Ispis: " << (int)r << endl;
	cout << "Unos: " << r << "  Ispis: " << (int)(r + 0.5F) << endl;

	system("pause");
	return 0;
}