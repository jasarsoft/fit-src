#include <iostream>
using namespace std;

/*
	Imate li ideju kako mozete ispisati vrijednost korijena iz varijable a, tako da varijabla a 
	ostane tipa int ? Rijec je Visual Studio-u 2005! 

	#include <iostream>
	using namespace std;
	#include <math.h>

	void main()
	{
		float r;
		int a;
		cout << "Unesite cijeli broj: ";
		cin >> a;

		r = sqrt(a);  // error C2668: 'sqrt' : ambiguous call to overloaded function
		cout << r << endl;
	}
*/

int main()
{
	int a;
	float r, b;

	cout << "Unesite cijeli broj: ";
	cin >> a;

	b = float(a);
	r = sqrt(b);
	cout << "Kvadratni korijen tog broja je: " << r << endl;

	system("pause");
	return 0;
}