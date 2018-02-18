#include <iostream>
using namespace std;

int main() {
	int unos = 0; //varijabla za cuvanje unosa, pocetno inicijalizovana sa nula
	cout << "Unesite broj (1-100) "; //poruka za unos broja
	cin >> unos; //prihvatanje cjelobrojnog broja sa ulaza

	if (unos >= 1 && unos <= 100) //uslov da li je unos veci ili jednak od 1 te manji ili jedna 100
		if (unos <= 50) //uslov koji se izvrsava kada je uslov iznad tacan; ako je unos manji ili jedna 50 tada
			cout << "Unos je 1 - 50" << endl; //ispisi poruku na izlaz i prebaci kursor u novi red
		else //inace ako uslov nije ispunjen tj unos je veci od 50 (zbog prvog uslova broj je manji ili jedna 100
			cout << "Unos je 50 - 100" << endl; //ispisi poruku na izlaz i prebaci kursor u novi red
	else //ako broj nije veci ili jedank 1 i nije manji ili jedank 100 tada
		cout << "Nespravan unos" << endl; //ispisi poruku na izlaz i prebaci kursor u novi red

	system("pause"); //komanda poslata sistemu (pauzira izvrsavanje u cmd-u)
	return 0; //povratna vrijednost funkcije main
}
