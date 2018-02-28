#include <iostream>
using namespace std;

/*
	Prepravite program 49c tako da koristite što vise varijabli za uslove. 
*/

int main()
{
	int index;
	bool u1, u2, u3, u4;

	cout << "Unesite broj index-a: ";
	cin >> index;

	u1 = index >= 1;
	u2 = index <= 1600;
	u3 = index < 1;
	u4 = index > 1600;

	if (u1 && u2)
		cout << "Broj index-a je validan.\n";

	if (u3 || u4)
		cout << "Broj index-a nije validan.\n";

	cout << "Kraj programa.\n";

	system("pause");
	return 0;
}