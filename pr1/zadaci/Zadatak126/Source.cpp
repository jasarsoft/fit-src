#include <iostream>
using namespace std;

/*
	Zadatak 115:
	Napravite program koji ce za pet unesenih brojeva ispisati najmanji, 
	koristeci samo gotovu funkciju min bez upotrebe if-(else)-iskaza.
*/

int min(int, int);

int main()
{
	int a, b, c, d, e;

	cout << "Unesite pet cijelobrojnih vrijednosti\n";
	cin >> a >> b >> c >> d >> e;

	cout << "Najmanji broj je: " << min(min(min(min(a, b), c), d), e) << endl;

	system("pause");
	return 0;
}

int min(int a, int b)
{
	return a <= b ? a : b;
}