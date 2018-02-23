#include <iostream>
using namespace std;

/*
	Napisite program koji ce za uneseni broj mjeseca ispisati koliko taj mjesec ima dana.  
	Predvidite sto se desava u slucaju prijestupne godine. Postujte sve faze procesa programiranja. 
*/

int main()
{
	int mjesec;
	char prijestupna;

	cout << "Unesite redni broj mjeseca za koji zelite saznati koliko ima dana\n";
	cout << "1 za januar\n";
	cout << "2 za februar\n";
	cout << "3 za mart\n";
	cout << "4 za april\n";
	cout << "5 za maj\n";
	cout << "6 za juni\n";
	cout << "7 za juli\n";
	cout << "8 za avgust\n";
	cout << "9 za septembar\n";
	cout << "10 za oktombar\n";
	cout << "11 za novembar\n";
	cout << "12 za decembar\n";
	cin >> mjesec;

	switch (mjesec)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Mjesec ima 31 dan\n";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Mjesec ima 30 dana\n";
		break;
	case 2:
		cout << "Da li je godina prijestupna (D ili d): ";
		cin >> prijestupna;
		if ((prijestupna == 'd') || (prijestupna == 'D'))
			cout << "Februar ima 29 dana.\n";
		else
			cout << "Februar ima 28 dana.\n";
		break;
	default:
		cout << "Niste odabrali odgovarajuci mjesec.\n";
		break;
	}

	system("pause");
	return 0;
}