#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//1. Napisz funkcję, która sprawdzi, czy podany napis składa się tylko z cyfr.

bool czy_numeryczny(string& a) {
	for (int i = 0; i < size(a);++i) {
		if (a[i] < 48 || a[i] > 57 ){
			return false;
		}
	}
	return true;
}

int main() {
	string a = "ad6";
	string b = "12356";
	string c = "5432a";

	cout << czy_numeryczny(a) << endl;
	cout << czy_numeryczny(b) << endl;
	cout << czy_numeryczny(c) << endl;
}
