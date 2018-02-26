#include <iostream>
using namespace std;

/*
	Napravite program koji ce vam prikazati koji se raspon ASCII brojeva koristi za mala 
	slova engleske abecede (a  ...  z) i koji raspon ASCII brojeva koristi za velika slova 
	engleske abecede (A ... Z). Pomocu programa treba da saznate kolika je brojcana razlika 
	u ASCII kodovima izmeðu malih i velikih slova. 
*/

int main()
{
	char a = 'a', z = 'z';
	char A = 'A', Z = 'Z';

	cout << "Raspon od slova a do slova z je: " << (int)a << " - " << (int)z << endl;
	cout << "Raspon od slova A do slova Z je: " << (int)A << " - " << (int)Z << endl;
	cout << "Brojcana razlika je: " << ((int)Z - (int)A) << endl;

	system("pause");
	return 0;
}