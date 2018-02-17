#include <iostream>
using namespace std;

void Uradi(int broj);
void Uradi2(int &broj);

int main()
{
	int x = 10;
	Uradi(x);
	cout << "x = " << x << endl;

	x = 10;
	Uradi2(x);
	cout << "x = " << x << endl;
	
	system("pause");
	return 0;
}

void Uradi(int broj)
{
	broj = 0;
	cout << "broj = " << broj << endl;
}

void Uradi2(int &broj)
{
	broj = 0;
	cout << "broj = " << broj << endl;
}