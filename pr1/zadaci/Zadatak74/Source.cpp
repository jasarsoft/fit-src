#include <iostream>
using namespace std;

/*
	Napraviti program koji ce ispisati sva cjelobrojna rjesenja jednacine:  
	3x–10y=5  za  y=1 do 60 
*/

int main()
{
	int x, y;

	y = 1;
	while (y <= 60)
	{
		x = (5 + 10 * y);
		if (x % 3 == 0)
			cout << "Rjesenje: y = " << y << ";  x = " << x / 3 << endl;

		y++;
	}

	system("pause");
	return 0;
}