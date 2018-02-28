#include <iostream>
using namespace std;

/*
	Napravite program koji ce zahtijevati unos broja a i b (tipa int), i jednog broja (1 do 4) 
	za izbor neke od ponudjenih operacija za racunanje vrijednosti y
	
	y1 = a/b
	y2 = sqrt(a/b)
	y3 = pow(a, 2)/b
	y4 = (a*c)/b		u ovom slucaju je potrebno zahtijevati unos i broja c 

*/

int main()
{
	int op;
	float y;
	int a, b;
	
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
			y = float(a) / float(b);
			break;
		case 2:
			y = (float)sqrt(float(a) / float(b));
			break;
		case 3:
			y = (float)(pow(a, 2)/b);
			break;
		case 4:
		{
			int c;

			cout << "Unesite vrijednost c: ";
			cin >> c;

			y = (a * c) / float(b);
			break;
		}			
		default:
			cout << "Pogresan broj operacije.\n";
			system("pause");
			return 1;
		}

		cout << "Vrijednost y: " << y << endl;
	}

	system("pause");
	return 0;
}