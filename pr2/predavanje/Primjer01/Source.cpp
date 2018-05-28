#include<iostream>
using namespace std;

/*
	Izracunavanje sume kvadrata cijeli brojeva u rasponu od m do n rekurzijom
*/

int SumaKvardata(int m, int n) {
	if (m > n) //uslov za prekid
		return 0; 

	return m * m + SumaKvardata(m + 1, n); //ponovno pozivanje istoimene funkcije
}

int main()
{
	int m = 1;
	int n = 10;

	cout << SumaKvardata(m, n) << endl;

	system("pause");
	return 0;
}