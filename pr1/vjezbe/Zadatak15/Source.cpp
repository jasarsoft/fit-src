#include <iostream>
using namespace std;

/*
	Napisite  program,  postujuci  sve  faze  procesa  programiranja,    koji  ce  za 
	uneseno  malo  slovo  engleske  abecede  ispisati  to  isto  slovo  samo  veliko  i  obrnuto,  za 
	uneseno veliko slovo ispisati malo. Obavezno upotrijebite uvjetni operator. 
*/

int main()
{
	char slovo;

	cout << "Unesite slovo: ";
	cin >> slovo;

	((slovo >= 'a') && (slovo <= 'z')) ? cout << char(slovo - 32) :
		((slovo >= 'A') && (slovo <= 'Z')) ? cout << char(slovo + 32) : cout << "Niste unijeli slovo!\n";

	system("pause");
	return 0;
}