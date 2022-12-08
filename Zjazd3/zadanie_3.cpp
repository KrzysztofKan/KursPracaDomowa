#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//3. Przyjmij od użytkownika 5 wierszy dlugości 5, składających się ze znaków '.' i '*', gdzie:
//-'.' oznacza puste pole
//- '*' oznacza minę
//Wypisz na ekran te napisy, ale zamiast każdego pustego pola wypisz liczbę oznaczającą z iloma
//minami sąsiaduje(jak w grze Saper).Przykładowo, dla danych :
//..*..
//*....
//.*...
//.*.*.
//....*
//powinno zostać wypisane :
//1 2 * 1 0
//* 3 2 1 0
//3 * 3 1 1
//2 * 3 * 2
//1 1 2 2 *
//
//hint : możesz stworzyć tablicę stringow(std::string tab[5])


void check_mines(string& pole,int s ) {
	for (int i = 0; i < s; ++i) {
		for (int j = 0; j < s; ++j) {
			if (i == 0){
				if (j == 0 || j == 4){
					pole[i][j] = "1";
				}


			}




		}
	}
}



int main() {
	const int s = 5;
	string pole[s]{ "..*..","*....",".*...",".*.*.","....*" };
	
	//string pole[s]{};
	/*for (int i = 0; i < s; ++i) {
		cin >> pole[i];
	}*/

	check_mines(*pole,s);

	

	for (int i = 0; i < s; ++i) {
		cout << pole[i]<< endl;

	}


}	
