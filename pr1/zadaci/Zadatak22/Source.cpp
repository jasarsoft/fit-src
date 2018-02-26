#include <iostream>
using namespace std;

/*
	Deklarisite varijablu a1 tipa char. Ucitajte od krajnjeg korisnika neko slovo sa tastature u 
	varijablu a1. Zatim, ispisite ASCII broj tog znaka.
*/

int main()
{
	char a1;

	cout << "Unesite neki znak: ";
	cin >> a1;
	
	cout << "ASCII kod unesenog je: " << (int)a1 << endl;

	system("pause");
	return 0;
}