#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji ce omoguciti kvadriranje bilo koje cjelobrojne vrijednosti. 
	Upotrijebite funkciju kako bi ste izvrsili kvadriranje. 
*/

int kvadrat(int);

int main()
{
	int x, y;

	cout << "Unesite broj koji zelite kvadrirati: ";
	cin >> x;

	y = kvadrat(x);
	cout << "Vrijednost kvadratne funkcije: " << y << endl;

	system("pause");
	return 0;
}

int kvadrat(int x)
{
	return x * x;
}