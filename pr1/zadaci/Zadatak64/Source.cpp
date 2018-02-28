#include <iostream>
using namespace std;

/*
	Ako korisnik izabere broj 1 i ako je vrijedi uslov a!=b program treba izracunati vrijednost 
	y1  i vrijednost y2 , a ako vrijedi a==b program treba izracunati samo y1  
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
			{
				y1 = float(a) / float(b);
				cout << "Vrijednost y1 = " << y1 << endl;

				if (a == b)
					break;
			}
			case 2:
			{
				y2 = (float)sqrt(float(a) / float(b));
				cout << "Vrijednost y2 = " << y2 << endl;
				break;
			}
			case 3:
			{
				y3 = (float)(pow(a, 2) / b);
				cout << "Vrijednost y3 = " << y3 << endl;
			}
			case 5:
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