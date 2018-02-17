//izracunava x na y potenciju

#include <iostream>
using namespace std;

int main()
{
	int x, y, i, potencija;

	i = 1;
	potencija = 1;
	cin >> x;
	cin >> y;
	
	while (i <= y)
	{
		potencija *= x;
		++i;
	}

	cout << potencija << endl;
	system("pause");
	return 0;
}