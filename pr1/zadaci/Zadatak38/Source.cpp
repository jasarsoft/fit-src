#include <iostream>
using namespace std;

/*
	Prepravite prethodni program tako da umjesto tri if-iskaza koristite dva if-else-iskaza. 
*/

int main()
{
	int x, y;

	cout << "Unesite vrijednost x: ";
	cin >> x;

	if (x > 0)
		y = (int)sqrt(x + 1);
	else
	{
		if (x == 0)
			y = 0;
		else
			y = (int)pow(x, 2);
	}

	cout << "Vrijednost y je: " << y << endl;

	system("pause");
	return 0;
}