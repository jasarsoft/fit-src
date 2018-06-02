#include<iostream>
using namespace std;

/*
	pokazivaci
*/


int main()
{
	int *p = NULL;		//deklaracija pokazivaca p na int
	int x = 3;			//deklaracija varijable x tipa int;
	int y = 4;			//deklaracaija varijable y tipa int;

	p = &x;			//p pokazuje na x
	x = x + *p;		//udvostrucuje se x
	p = &y;			//sada p pokazune na y
	*p = 42;		//y je dodjeljena vrijednost 42

	p = &x; //p pokazuje na x ponovo
	while (*p == x) { //vrijednost na koju pokazuje p je x a x je = x sto je true
		*p = *p + 1;  //vrijednost x ce se povecati za 1 a samim time
	} //petlja je beskonacna


	system("pause");
	return 0;
}