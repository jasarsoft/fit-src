#include<iostream>
using namespace std;

/*
	Najveci zajednicki djelilac
*/

int nzd(int a, int b) {
	//ako je drugi broj 0 tj djeljiv je sa prvim tada je nzd prvi broj
	if (b == 0) //bazni slucaj
		return a;
	//inace trazi djelitelja sa ostatkom
	return nzd(b, a % b);
}

int main()
{
	cout << nzd(6, 2) << endl;

	system("pause");
	return 0;
}