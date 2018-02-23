#include <iostream>
using namespace std;

/*
	Napisite  program  koji  ce  za  slovo  uneseno  s  tastature  odrediti  je  li  rijec  o 
	vokalu  ili  konsonantu,  te  ispisati  odgovarajucu  poruku.  
	Postujte  sve  faze  procesa programiranja. 
*/

int main()
{
	char slovo;
	
	cout << "Unesite slovo: ";
	cin >> slovo;
	
	if (slovo < 'A' || slovo > 'z')
	{
		cout << "Niste unijeli slovo!\n";
		system("pause");
		return 1;
	}

	switch (slovo)
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':
		cout << "Unijeli ste vokal!\n";
		break;
	default:
		cout << "Unijeli ste konsonant!\n";
		break;
	}
	
	system("pause");
	return 0;
}