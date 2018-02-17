//preikrement i postikrement

#include <iostream>

using namespace std;

void main()
{
	int c;

	c = 5;
	cout << c << endl;				//ispisat ce 5
	cout << c++ << endl;			//ispisat ce 5 a zatim ce vrijednost varijable promjeniti na 6
	cout << c << endl << endl;		//ispisat ce 6

	c = 5;
	cout << c << endl;				//ispisat ce 5
	cout << ++c << endl;			//vrijednost varijable ce se promjeniti na 6 i ispisat ce se 6
	cout << c << endl;				//ispisat ce se 6

	system("pause>0");
}