#include<iostream>
using namespace std;

/*
	Hanoi Kule (rekurzija)
*/

void HanoiKule(int disk, char start, char pomocni, char destinacija) {

	//ako nema diskova vise prekini
	if (disk == 0 || disk >= 64)
		return;

	//prebacivanje diskova na pomocni toranj
	HanoiKule(disk - 1, start, destinacija, pomocni);
	cout << "Disk sa tornja " << start << " na toranj " << destinacija << endl;
	//prebacivanje diskova sa pomocnog na destinaciju
	HanoiKule(disk - 1, pomocni, start, destinacija);
}

int main()
{
	HanoiKule(3, 'A', 'C', 'B');

	system("pause");
	return 0;
}