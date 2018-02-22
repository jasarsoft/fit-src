#include <iostream>
using namespace std;

int djelitelj(int b, int a, int c);

int main()
{
	int broj1, broj2, manji;

	cout << "Unesite dva broja:\n";
	cin >> broj1;
	cin >> broj2;

	if (broj1 <= broj2)
		manji = broj1;
	else
		manji = broj2;

	cout << "Najveci zajednicki djelitelj je: " << djelitelj(broj1, broj2, manji) << endl;
	
	system("pause");
	return 0;
}

int djelitelj(int a, int b, int c)
{
	int temp;

	for (int i = 1; i <= c; i++)
		if (a%i == 0 && b%i == 0)
			temp = i;

	return temp;
}