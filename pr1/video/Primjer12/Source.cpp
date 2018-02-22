#include <iostream>
using namespace std;

//Da li je broj binaran

bool binaran(int);

int main()
{
	int broj;
	cout << "Unesite binaran broj: ";
	cin >> broj;

	if (binaran(broj))
		cout << "Uneseni broj je binaran!\n";
	else
		cout << "Uneseni broj nije binaran!\n";

	system("pause");
	return 0;
}

bool binaran(int b)
{
	int ostatak;

	while (b > 0)
	{
		ostatak = b % 10;
		if (ostatak != 0 && ostatak != 1)
			return false;

		b /= 10; //b = b / 10;
	}

	return true;
}