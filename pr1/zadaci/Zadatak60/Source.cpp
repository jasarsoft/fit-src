#include <iostream>
using namespace std;

/*
	Napravite program koji ce zahtijevati unos broja a, zatim neki matematicki operator (+, -,  *,  /),
	a zatim broj b. Program treba ispisati izracunatu vrijednost na ekran. Vodite racuna o 
	ogranicenjima. Koristite switch-iskaz.  

	Zadatak rijesite na dva nacina: 
	a) izracunatu vrijednost odmah ispisite na ekran u switch-iskazu, bez koristenja 
		dodatnih varijabli 
	b) izracunatu vrijednost pridruzite varijabli novoj variajbli y, a ispis vrsite izvan 
		switch-iskaza 
*/

int main()
{
	char op; 
	float a, b, y;

	cout << "Unesite vrijednost a: ";
	cin >> a;

	cout << "Unesite vrijednost b: ";
	cin >> b;

	cout << "Uneiste operator: ";
	cin >> op;

	switch (op)
	{
	case '+':
		y = a + b;
		break;
	case '-':
		y = a - b;
		break;
	case '*':
		y = a * b;
		break;
	case '/':
		if (b == 0)
			y = 0.0F;
		else
			y = a / b;

	default:
		cout << "Unijeli ste pogresan opertor!\n";

		system("pause");
		return 1;
	}

	cout << "Vrijednost y = "<< a << " " << op << " " << b << " = " << y << endl;
	
	system("pause");
	return 0;
}