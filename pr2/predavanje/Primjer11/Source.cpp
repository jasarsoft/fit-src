#include<iostream>
using namespace std;

/*
	rekurzija i niz	
*/

int sumaRekurzivno(int niz[], int max) {
	if (max < 0)
		return 0;

	return niz[max] + sumaRekurzivno(niz, max - 1);
}


int main()
{
	const int max = 5;
	int niz[max] = { 1, 2, 3, 4, 5 };

	cout << "Suma: " << sumaRekurzivno(niz, max - 1);
	cout << endl;

	system("pause");
	return 0;
}