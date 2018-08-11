#include <iostream>
using namespace std;

void funkcija2() {
	cout << "Unutar funkcije 2" << endl;
}

void funkcija1() {
	cout << "Prije poziva funkcije 2" << endl;
	funkcija2();
	cout << "Nakon poziva funkcije 2" << endl;
}

void main() {
	funkcija1();
}