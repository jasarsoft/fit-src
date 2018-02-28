#include <iostream>
using namespace std;

/*
	Napravite program koji ce zahtijevati unos dva broja (a i b tipa int) i ispisuje vrijednost y. 
	Trebate izracunati vrijednost y = a/b ako su zadovoljeni sljedeæi uslovi: 

	a > 0
	broj a ne smije biti djeljiv sa 19
	a ne pripada od (ukljucujuci i njega) 111 do 555 (ne ukljucujuci njega)
	b razlicito od 0
	a > 3b

	- izuzetak gore navedenim uslovim su sljedeci slucajevi
	b = 13
	b pripada od ne ukljucujuci njega 127 do 255 ukljucujuci njega
	b = a
 
	Za slusajeve koji ne zadovoljavaju nabrojane uslove ili ne spadaju u izuzetke  potrebno 
	zahtijevati unos broja c (tipa int) i izracunati vrijednost 
	
	y = (a*b)/sqrt(y)
*/

int main()
{
	int a, b;
	float y;
	bool u1, u2, u3, u4, u5, u6, u7, u8;

	cout << "Unesite vrijednost a: ";
	cin >> a;

	cout << "Unesite vrijednost b: ";
	cin >> b;

	u1 = a > 0;
	u2 = a % 19 != 0;
	u3 = a <= 111 || a > 555;
	u4 = b != 0;
	u5 = a > 3*b;

	u6 = b == 13;
	u7 = b >= 127 && b <= 255;
	u8 = b == a;

	if (u1 && u2 && u3 && u4 && u5 || u6 || u7 || u8)
	{
		y = float(a) / float(b);
	}
	else
	{
		int c;

		cout << "Unesite vrijednost c: ";
		cin >> c;

		y = (a * b) / (float)sqrt(c);
	}

	cout << "Vrijednost y = " << y << endl;

	system("pause");
	return 0;

}