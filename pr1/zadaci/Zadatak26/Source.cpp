#include <iostream>
using namespace std;

/*
	
*/

int main()
{
	int x1;
	x1 = int('@') + int('#');
	cout << "x1 = " << x1 << endl;

	char a1;
	a1 = char(x1);
	cout << "a1 = " << a1 << endl;


	int x2;
	x2 = '@' + '#';
	cout << "x2 = " << x2 << endl;

	char a2;
	a2 = x2;
	cout << "a2 = " << a1 << endl;

	system("pause");
	return 0;
}