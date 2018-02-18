#include <iostream>
using namespace std;

int main() {
	int unos1, unos2; //varijable za unos 1 i 2
	char operacija; //varijabla za unos operacije: + - * /

	cout << "Unesite unos 1: ";
	cin >> unos1;
	cout << "Unesite unos 2 ";
	cin >> unos2;
	cout << "Unesite operaciju (+ - * /): ";
	cin >> operacija;

	switch (operacija)
	{
	case '+': //ako je operacija == '+'
		cout << unos1 << " " << operacija << " " << unos2 << " = " << unos1 + unos2 << endl; //ispis: a + b = c
		break; //prekid switch-a
	case '-': //ako je operacija == '-'
		cout << unos1 << " " << operacija << " " << unos2 << " = " << unos1 - unos2 << endl; //ispis: a - b = c
		break; //prekid switch-a
	case '*': //ako je operacija == '*'
		cout << unos1 << " " << operacija << " " << unos2 << " = " << unos1 * unos2 << endl; //ispis: a * b = c
		break; //prekid switch-a
	case '/': //ako je operacija == '/'
		cout << unos1 << " " << operacija << " " << unos2 << " = " << unos1 / unos2 << endl; //ispis: a / b = c
		break; //prekid switch-a
	default: //kada ni jedan slucaj nije ispunjen tada se izvrsava ovaj dio
		cout << "Operacija nije podrzana!";
		break; //ovaj break nije potreban svejedno je kraj switch-a nakon ovog
	}
	

	system("pause");
	return 0;
}