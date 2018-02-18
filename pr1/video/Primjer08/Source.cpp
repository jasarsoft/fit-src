#include <iostream>
using namespace std;

int main()
{
	char znak;
	int visina, sirina;

	cout << "Unesite znak: ";
	cin >> znak;

	cout << "Koliko polje zelite: ";
	cin >> visina >> sirina; //unos visine i sirine

	for (int i = 1; i <= visina; i++) //iteracija od 1 do visine ukljucujuci i nju
	{
		for (int j = 1; j <= sirina; j++) //iteracija od 1 do sirine ukljucujuci i nju
			cout << znak << " "; //ispis znaka te razmaka

		cout << endl; //novi red nakon sto se ispise jedan red znakova tj zavrsi for petlja sa sirinom
	}
	
	system("pause");
	return 0;
}