#include <iostream>
using namespace std;

/*
	Potrebu za prijenos parametara ilustrirat cemo na primjeru programa 
	koji racuna i ispisuje obim i povrsinu kruga
*/

const double PI = 3.141592654;

void krug(int);

int main(void)
{
	int poluprecnik;

	cout << "Unesite duzinu poluprecnika: ";
	cin >> poluprecnik;

	krug(poluprecnik);

	system("pause");
	return 0;
}

void krug(int r)
{
	cout << "Obim: " << 2 * PI*r << endl;
	cout << "Povrsina: " << PI * r*r << endl;
}