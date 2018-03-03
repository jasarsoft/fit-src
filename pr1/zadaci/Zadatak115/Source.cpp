#include <iostream>
using namespace std;

/*
	Sta ce sljedeci program ispisati!
*/

void main()
{
	double x;

	x = sqrt(9.0) + 2 * sqrt(4.0);
	cout << "x = " << x << endl; //7

	x = pow(sqrt(9.0), 3);
	cout << "x = " << x << endl; //27

	x = sqrt(sqrt(16.0));
	cout << "x = " << x << endl; //2

	x = pow(sqrt(sqrt(16.0)), sqrt(9.0));
	cout << "x = " << x << endl; //8

	if (sqrt(9.0) > sqrt(8.9)) //true tj. 1
		cout << sqrt(9.0) << " je vece od " << sqrt(8.9) << endl; 
}
