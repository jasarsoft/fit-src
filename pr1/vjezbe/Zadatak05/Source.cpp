/*
	Napisite program u kojem cete deklarisati onoliko varijabli tipa char
	koliko ima slova u vasem imenu. Svakoj od varijabli dodjelite po jedno 
	slovo svog imena. Ispisite vrijednosti svih varijabli a zatim promjeenite
	varijabli tako da velika slova postanu mala i obratno.
*/

#include <iostream>
using namespace std;

int main()
{
	char s1, s2, s3, s4;

	s1 = 'E';
	s2 = 'd';
	s3 = 'i';
	s4 = 'n';

	cout << s1 << s2 << s3 << s4 << endl;

	//pomak u ASCII kodu izmedju mali i veliki slova je 32
	s1 = s1 + 32;
	s2 = s2 - 32;
	s3 = s3 - 32;
	s4 = s4 - 32;

	cout << s1 << s2 << s3 << s4 << endl;
	system("pause");
	return 0;
}