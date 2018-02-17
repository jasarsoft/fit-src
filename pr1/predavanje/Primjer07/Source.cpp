#include <iostream>
using namespace std;

int main()
{
	int y, x = 1, ukupno = 0;

	while (x <= 10)
	{
		y = x * x;
		cout << y << endl;
		ukupno += y;
		++x;
	}

	cout << "Ukupno " << ukupno << endl;

	system("pause");
	return 0;
}