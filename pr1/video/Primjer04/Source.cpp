#include <iostream>
using namespace std;

int main()
{
	//petlja while

	int i = 1; //inicijalizacija brojaca

	while (i <= 100) //uslov while petlje: da li je i manje ili jednako 100
	{
		cout << i << endl; //ispis brojaca trenutne iteracije
		i++; //uvecanje brojaca za 1
	}//kraj while petlje

	system("pause");
	return 0;
}