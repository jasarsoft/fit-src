#include <iostream>
using namespace std;

/*
	Napravite program koji ce racunati vrijednost y = f(x) i ispisati je na ekran. Vrijednost x 
	se trebati ucitati sa tastature od korisnika. 

	y = sqrt(x+1) za x > 0
	y = 0 za x = 0
	y = x^2 za x < 0

	Program rijesite pomocu tri if-iskaza (jednostruki if-iskaz). Sva tri iskaza trebaju biti
	povezani jedan ispod drugog.
	Ako ispravno postavite uslove onda ce se tacno jedan if-iskaz izvrsiti jer, za bilo koju
	vrijednost koju varijable x moze imati, uvijek ce biti zadovoljen jedan od tri uslova.
*/

int main()
{
	int x, y;

	cout << "Unesite vrijednost x: ";
	cin >> x;

	if (x > 0)
		y = (int)sqrt(x + 1);
	
	if (x == 0)
		y = 0;
	
	if (x < 0)
		y = (int)pow(x, 2);

	cout << "Vrijednost y je: " << y << endl;

	system("pause");
	return 0;
}