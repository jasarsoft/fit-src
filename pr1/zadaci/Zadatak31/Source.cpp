#include <iostream>
using namespace std;

/*
	Rijesite ponovo prethodni zadatak tako da ne koristite dodatnu varijablu! 
*/

int main()
{
	int a;
	float r;

	cout << "Unesite cijeli broj: ";
	cin >> a;

	r = sqrt(float(a));
	cout << "Kvadratni korijen tog broja je: " << r << endl;

	system("pause");
	return 0;
}