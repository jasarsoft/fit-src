#include <iostream>
using namespace std;

int main()
{
	char a;
	int c;
	int suma = 0;

	do
	{
		cin >> a;
		cin >> c;
		suma += a + c;
		cout << suma;
	} while (a != 'e');

	system("pause");
	return 0;
}