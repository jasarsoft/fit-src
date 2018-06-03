#include<iostream>
using namespace std;

/*
	sta ispisuje
*/


int main()
{
	int i, j;
	int *p1, *p2;

	i = 10;
	j = 20;
	p1 = &i;
	p2 = p1;
	*p1 = i;
	*p2 = j;
	cout << *p1 << " " << *p2 << endl; //20 20

	i = 10;
	j = 20;
	p1 = &i;
	p2 = &j;
	j = *p1;
	i = *p2;
	cout << *p1 << " " << *p2 << endl; //10 10

	i = 10;
	j = 20;
	p1 = &i;
	p2 = &j;
	*p1 = i + 10;
	*p2 = i + 10;
	cout << *p1 << " " << *p2 << endl; //20 30

	i = 10;
	j = 20;
	p1 = &i;
	*p2 = *p1;
	cout << *p1 << " " << *p2 << endl; // 10 10

	i = 10;
	j = 20;
	p1 = &i;
	p2 = p1;
	j = *p2;
	cout << *p1 << " " << *p2 << endl; // 10 10

	i = 10;
	j = 20;
	p1 = &i;
	p2 = &j;
	*p1 = *p2 + 10;
	*p2 = *p1 + 10;
	cout << *p1 << " " << *p2 << endl; // 30 40

	system("pause");
	return 0;
}