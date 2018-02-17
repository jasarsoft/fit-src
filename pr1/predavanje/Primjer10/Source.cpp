//upotreba do/while strukture ponavljanja

#include <iostream>
using namespace std;

int main()
{
	int brojac = 1;

	do
	{
		cout << brojac << " ";
	} while (++brojac <= 10);

	cout << endl;

	system("pause");
	return 0;
}