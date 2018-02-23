#include <iostream>
using namespace std;

/*
	Napisite program, postujuci sve faze programiranja, u kojem cete omoguciti 
	unos tri cijela broja, a ispisati najveci. 
*/

int main()
{
	int b1, b2, b3; //broj
	bool u1, u2, u3; //uvijet

	cout << "Unesite tri cijela broja:\n";
	cin >> b1 >> b2 >> b3;

	u1 = b1 >= b2 && b1 >= b3;
	u2 = b2 >= b1 && b2 >= b3;
	u3 = b3 >= b1 && b3 >= b2;

	cout << "Najveci broj je ";
	u1 ? cout << b1 : //ako je ispunjen uslov1 tada je broj1 najveci inace
		u2 ? cout << b2 : cout << b3; //ako je isunjen uslov2 tada je broj2 najveci inace broj3 je najveci

	system("pause");
	return 0;
}