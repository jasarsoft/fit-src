#include <iostream>
using namespace std;

/*
	Šta æe program ispisati?  
	
	void main()
	{
		int a = 20;
		int b;
		b = a++;
		a++;
		cout << a << endl;
		cout << b << endl;
		cout << ++a << endl;
		cout << b++ << endl;
		cout << --a << endl;
		cout << b-- << endl;
	}
*/

int main()
{
	int a = 20;
	int b;

	b = a++; //b = 20, a = 21;
	a++; //a = 22;

	cout << a << endl;		//22;
	cout << b << endl;		//20;
	cout << ++a << endl;	//23;
	cout << b++ << endl;	//20;
	cout << --a << endl;    //22;
	cout << b-- << endl;	//21

	//a = 22; b = 20
	cout << endl << endl;
	cout << a << endl << b << endl;

	system("pause");
	return 0;
}