//prestupna godina

#include <iostream>
using namespace std;

void main() {
	int god;
	cout << "Unesite godinu (GGGG): ";
	cin >> god;
	cout << endl;

	if ((god % 400) == 0)
		cout << "Godina je prestupna!"; //iznimka za 2000 godinu
	else
		if ((god % 100) == 0) //obrnuto ne bi trebalo
			cout << "Godina nije prestupna";
		else
			switch (god % 4){
				case 0:
					cout << "Godina je prestupna!\n";
					break;
				case 1:
				case 2:
					cout << "Godina nije prestupna!\n";
					break;
				default:
					cout << "Godina nije prestupna!\n";
					break;
			}
}