#include <iostream>
using namespace std;

int main() {
	int unos = 0; //varijabla za cuvanje unosa, pocetno inicijalizovana sa nula
	cout << "Unesite broj (1-100) "; //poruka za unos broja
	cin >> unos; //prihvatanje cjelobrojnog broja sa ulaza

	if (unos >= 1 && unos <= 25) //uslov da li je unos veci ili jednak od 1 te manji ili jedna 25
		cout << "Unos je 1 - 25" << endl; //ispisi poruku na izlaz i prebaci kursor u novi red, te krenuti na komandu: system("pause)";

	//nije ispunjen uslov da je unos veci ili jedna 1 i da je unos manji ili jednak 25
	else if (unos > 26 && unos <= 50) //ako je unos veci 25 i da li je manji ili jednak 50 tada
		cout << "Unos je 26 - 50" << endl; //ispisi poruku na izlaz i prebaci kursor u novi red, te krenuti na komandu: system("pause)";

	//ako nije unos veci 25 i ako unos nije manji ili jedank 50 tada
	else if (unos > 5 && unos <= 75) //ako je unos veci 50 i unos manji ili jednak 75 tada
		cout << "Unos je 51 - 75" << endl; //ispisi poruku na izlaz i prebaci kursor u novi red, te krenuti na komandu: system("pause)";

	//ako unos nije veci ili jedank 51 i ako unos nije manji ili jedank 75 tada
	else if (unos > 75 && unos <= 100) //ako je unos veci od 75 i unos manji ili jedank 100 tada
		cout << "Unos je 76 - 100\n"; //ispisi poruku na izlaz i prebaci kursor u novi red te kreni na komandu: system("pause");
		
	else //ako ni jedan uslov nije ispunjen tada
		cout << "Nespravan unos\n"; //ispisi poruku na izlaz i prebaci kursor u novi red

	system("pause"); //komanda poslata sistemu (pauzira izvrsavanje u cmd-u)
	return 0; //povratna vrijednost funkcije main
}