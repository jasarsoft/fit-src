#include <iostream>
using namespace std;

/*
	Prepravite program 66 tako da … 
	-  ako korisnik unese broj 1 ili 2 ili 3, program treba izracunati vrijednost y1   
	-  ako korisnik unese broj 4, program treba izracunati vrijednost y2   
	-  ako korisnik unese broj 5 ili 6, program treba izracunati vrijednost y3  i vrijednost y4  
	-  ako korisnik unese broj 7, program treba izracunati vrijednost y4  
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
		case 2:
		case 3:
			y1 = float(a) / float(b);
			cout << "Vrijednost y1 = " << y1 << endl;
			break;
		case 4:		
			y2 = (float)sqrt(float(a) / float(b));
			cout << "Vrijednost y2 = " << y2 << endl;
			break;
		case 5:
		case 6:
			y3 = (float)(pow(a, 2) / b);
			cout << "Vrijednost y3 = " << y3 << endl;
		case 7:
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