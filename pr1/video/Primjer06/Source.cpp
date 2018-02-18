#include <iostream>
using namespace std;

// break naredba

int main()
{
	int a;

	do
	{
		cout << "a = ";
		cin >> a;
		cout << endl;

		if (a == 5) //ako je unijeta vrijednost a jednako 5 tada
			break; //prekida do-while petlju i ide na komandu: system("pause");

		cout << "Unijeto a = " << a << endl;
	} while (a != 0); //ponavljaj sve dok je a razlicito od 0

	system("pause");
	return 0;
}