#include<iostream>
using namespace std;

/*
	Faktorijel rekurzijom
*/

int Faktorijel(int n) {
	if (n <= 1)
		return 1;

	return n * Faktorijel(n - 1);
}

int main()
{	
	int n = 5;

	cout << Faktorijel(n) << endl;

	system("pause");
	return 0;
}