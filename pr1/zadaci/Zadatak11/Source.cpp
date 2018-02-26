#include <iostream>
using namespace std;

/*
	 Prodnadjete greske u slijedecim linijama koda: 

	 float pi = 3,14;
	 float r = 2;
	 cout << "Pi = " << pi <<  "," << \n << " a povrsina kruga iznosi";
	 cout << r * r * pi << "!" << "endl";
*/

int main()
{
	float pi = 3.14F;
	float r = 2.0F;
	
	cout << "Pi = " << pi << ", \na povrsina kruga iznosi";
	cout << r * r * pi << "!" << endl;

	system("pause");
	return 0;
}