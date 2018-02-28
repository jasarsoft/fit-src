#include <iostream>
using namespace std;

/*
	Prepravite prethodni program tako da … 
	-  ako korisnik unese broj 1, program treba izracunati vrijednost y 1  i vrijednost y 2   
	-  ako korisnik unese broj 2, program treba izracunati vrijednost y 2  
	-  ako korisnik unese broj 3, program treba izracunati vrijednost y 3  i vrijednost y 4   
	-  ako korisnik unese broj 4, program treba izracunati vrijednost y 4  
*/

int main()
{
	int op;
	int a, b;
	float y1, y2, y3, y4;

	cout << "Unesite vrijednost a: ";
	cin >> a;

	cout << "Unesite vrijednost b: ";
	cin >> b;

	cout << "Unesite operaciju (1-4): ";
	cin >> op;

	if (b == 0)
	{
		cout << "Vrijednost b ne smije biti 0!\n";
	}
	else
	{
		switch (op)
		{
		case 1:
			y1 = float(a) / float(b);
			cout << "Vrijednost y1 = " << y1 << endl;
		case 2:
			y2 = (float)sqrt(float(a) / float(b));
			cout << "Vrijednost y2 = " << y2 << endl;
			break;
		case 3:
			y3 = (float)(pow(a, 2) / b);
			cout << "Vrijednost y3 = " << y3 << endl;
		case 4:
		{
			int c;

			cout << "Unesite vrijednost c: ";
			cin >> c;

			y4 = (a * c) / float(b);
			cout << "Vrijednost y4 =" << y4 << endl;
			break;
		}
		default:
			cout << "Pogresan broj operacije.\n";
		}
	}

	system("pause");
	return 0;
}