#include <iostream>
using namespace std;

/*
	Napravite neki program u kojem cete koristiti dvije varijable cija ce vrijednost biti neki 
	uslov. 
*/

int main()
{
	int a = 5, b = 10;
	bool u1 = a > b, u2 = a < b;

	cout << "Uslov 1: " << u1 << endl;
	cout << "Uslov 2: " << u2 << endl;

	system("pause");
	return 0;
}