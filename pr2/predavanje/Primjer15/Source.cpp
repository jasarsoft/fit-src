#include<iostream>
using namespace std;

/*
	pokazivaci
*/


int main()
{
	int x = 45;
	int y = 64;
	int* p = NULL;

	p = &x; //pokazivac p sada pokazuje na varijablu x

	cout << "x = " << x << " &x = " << &x << endl;
	cout << "y = " << y << " &y = " << &y << endl;
	cout << "p = " << p << " &p = " << &p << " *p = " << *p << endl;

	system("pause");
	return 0;
}