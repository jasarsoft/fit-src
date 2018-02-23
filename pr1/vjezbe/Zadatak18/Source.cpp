#include <iostream>
using namespace std;

/*
	Napraviti  program  koji  ce  na  osnovu  dva  unesena  realna  broja  i  znaka  za 
	operaciju  (+,  -,  *  i  /)  izvrsiti  operaciju  nad  unesenim  brojevima.  
	Postujte  sve  faze procesa programiranja. 
*/

int main()
{
	char operacija;
	float b1, b2, rez = 0.0F;

	cout << "Unesite dva broja:\n";
	cin >> b1 >> b2;
	cout << "Unesite operaciju: ";
	cin >> operacija;

	cout << "Rezultat je: ";
	
	switch (operacija)
	{
	case '+':
		rez = b1 + b2;
		cout << rez << endl;
		break;
	case '-':
		rez = b1 - b2;
		cout << rez << endl;
		break;
	case '*':
		rez = b1 * b2;
		cout << rez << endl;
		break;
	case '/':
		if (b2 == 0)
			cout << "Djeljenje s nulom nije moguce!";
		else
		{
			rez = b1 / b2;
			cout << rez << endl;
		}		
		break;
	default:
		cout << "Pogresna operacija!\n";
		break;
	}

	system("pause");
	return 0;
}