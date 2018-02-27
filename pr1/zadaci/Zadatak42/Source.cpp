#include <iostream>
using namespace std;

/*

*/

int main()
{
	int index;

	cout << "Unesite broj index-a: ";
	cin >> index;

	if (index >= 1 && index <= 1600)
		cout << "Broj index-a je validan.\n";
	else
		cout << "Broj index-a nije validan.\n";

	cout << "Kraj programa.\n";

	system("pause");
	return 0;
}