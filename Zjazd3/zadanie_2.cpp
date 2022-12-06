#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//2. Napisz funkcję, która zaszyfruje podany napis szyfrem Cezara (https://pl.wikipedia.org/wiki/Szyfr_Cezara) 
//z podanym przesunięciem (użycie tej funkcji z ujemnym przesunięciem powinno odszyfrować zaszyfrowany napis).
void szyfr_c(string& wiadomosc,int com) {
	int prz = 0;
	if (com == 1) {// podany int 1 przesuwa wszytko o -3
		prz = -3;
	}
	else if (com == 0){// podany int 0 int przesuwa wszytko o 3+
		prz = 3;
	}
	for (int i = 0; i < size(wiadomosc); ++i){
		wiadomosc[i] = wiadomosc[i] + prz;
	}
}

int main() {
	string wiadomosc = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec vulputate.";
	
	cout<< "Przed: " << wiadomosc << endl;
	szyfr_c(wiadomosc, 1);
	cout << "Po: " << wiadomosc << endl;
	szyfr_c(wiadomosc, 0);
	cout << "Rozszyfrowane: " << wiadomosc << endl;
}	
