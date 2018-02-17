/*
	Napisite program koji ce ispisati velicinu svih tipova podataka
	(koje poznajete) izrazene u bajtima.
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Velicina int je:\t" << sizeof(int) << endl;
	cout << "Velicina short je:\t" << sizeof(short) << endl;
	cout << "Velicina long je:\t" << sizeof(long) << endl;
	cout << "Velicina char je:\t" << sizeof(char) << endl;
	cout << "Velicina float je:\t" << sizeof(float) << endl;
	cout << "Velicina double je:\t" << sizeof(double) << endl;

	system("pause");
	return 0;
}