#include <iostream>
#include <iomanip>
using namespace std;

/*
	Zadatak 134:
	Napisite program sa izbornikom (menî) za izracunavanje povrsine geometrijskih likova:  
	kvadrat, pravougaonik i krug. Za izracunavanje povrsine koristiti funkcije. Menî treba da 
	sadrzi i izbor za kraj izvrsenja programa. 
*/

const float PI = 3.14F;

void meni();
float krug(float);
float kvadrat(float);
float pravougaonik(float, float);

int main()
{
	meni();

	system("pause");
	return 0;
}

void meni()
{
	int n;

	cout << "Izbornik:\n";
	cout << "0. Izlaz\n";
	cout << "1. Povrsina kruga\n";
	cout << "2. Povrsina kvadrata\n";
	cout << "3. Povrsina prvougaonika\n";
	
	do
	{
		cout << "Unesite broj izbornika: ";
		cin >> n;
	} while (n < 0 || n > 3);

	switch (n)
	{
	case 0:
		break;
	case 1:
	{
		float r;
		cout << "Unesite poluprecnik kruga: ";
		cin >> r;
		cout << "Povrsina kruga je: " << setprecision(3) << krug(r) << endl;
		break;
	}
	case 2:
	{
		float a;
		cout << "Unesite stranicu a: ";
		cin >> a;
		cout << "Povrsina kvadrata je: " << setprecision(3) << kvadrat(a) << endl;
		break;
	}
	case 3:
	{
		float a, b;
		cout << "Unesite stranicu a: ";
		cin >> a;
		cout << "Unesite stranicu b: ";
		cin >> b;
		cout << "Povrisna pravougaonika je: " << setprecision(3) << pravougaonik(a, b) << endl;
		break;
	}
	default:
		cout << "Pogresan unos vrijednosti.\n";
		break;
	}
}

float krug(float r)
{
	return (r * r * PI);
}

float kvadrat(float a)
{
	return (a * a);
}

float pravougaonik(float a, float b)
{
	return (a * b);
}