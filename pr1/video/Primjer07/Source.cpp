#include <iostream>
using namespace std;

// continue naredba

int main()
{
	int a;

	do
	{
		cout << "a = ";
		cin >> a;
		cout << endl;

		if (a <= 0) //ako je unijeta vrijednost a manja ili jednaka nuli tada
			continue; //idi na pocetak bloka do tj na naredbu: cout << "a = ";

		cout << "Unijeto a = " << a << endl;
	} while (a <= 100); //ponavljaj sve dok je a manje ili jednako 100

	system("pause");
	return 0;
}