#include<iostream>
using namespace std;

/*
	Funkcija koja simulira rad pow(x, y) funkcije
*/

double pow(double x, double n) {
	if (n == 0) //bazni slucaj 1
		return 1;
	else if (n == 1) //bazni slucaj 2
		return x;
	else
		return x * pow(x, n - 1);

	/*
		2 * pow(2, 2)
			2 * pow(2, 1)
				2
		-----------------
		2 * 2 * 2
	*/
}

int main()
{
	cout << pow(2, 3) << endl; // 8

	system("pause");
	return 0;
}