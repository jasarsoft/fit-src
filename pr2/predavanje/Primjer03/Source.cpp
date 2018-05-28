#include<iostream>
using namespace std;

/*
	Fibonnacci-jev niz
*/

int Fibbonacci(int n){
	if (n <= 1) //bazni slucaj (slucaj prekida)
		return 1;

	//rekurzija istoimene funkcije mora imati promjenu argumenta (n-1)
	return Fibbonacci(n - 1) + Fibbonacci(n - 1);
}

int main()
{
	int n;
	cout << "Unesite broj clanova: ";
	cin >> n;
	cout << "Fibbonacci niz: ";

	//poziv za svaki clan niza pocev od 0 do n (broja clanova)
	for (int i = 0; i < n; i++)
		cout << Fibbonacci(i) << ", ";

	cout << endl;

	system("pause");
	return 0;
}