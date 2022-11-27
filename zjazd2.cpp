#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int rownanie_kwadratowe(double a, double b, double c, double* rozw1, double* rozw2) {
	return 0;
}

int zadanie1() {
//1. Napisz funkcje
//int rownanie_kwadratowe(double a, double b, double c, double* rozw1, double* rozw2)
//ktora zwroci informacje ile rozwiazan ma rownanie postaci
//0 = a * x ^ 2 + b * x + c
//Jesli rozwiazan jest 1 lub 2 to powinny one zostac zapisane pod adresami rozw1 i rozw2(analogicznie do przerabianej na zajeciach funkcji rownanie_liniowe).
//Do policzenia pierwiastka sluzy funkcja std::sqrt() dostepna w naglowku <cmath>.
	return 0;
}

int zadanie2() {
	int liczby[10]{ 0 };
	cout << "Podaj 10 liczb" << endl;
	for (int i = 0; i < 10; i++){
		cin >> liczby[i];
	}
	cout << "Parzyste: ";
	for (int i = 0; i < 10; i++){
		if (liczby[i] % 2 == 0) {
			cout << liczby[i] << " ";
		}
	} 
	cout << endl;
	cout << "Nieparyszte: ";
	for (int i = 0; i < 10; i++){
		if (liczby[i] % 2 != 0) {
			cout << liczby[i]<< " ";
		}
	}
	//2. Napisz program, który przyjmie 10 liczb całkowitych i wypisze z nich najpierw parzyste, a potem nieparzyste.
	return 0;
}

double srednia(int tab[],int roz) {
	double res = 0.;
	int sum = 0;
	for (int i = 0; i < roz; ++i) {
		sum = sum + tab[i];
	}
	res = static_cast<double>(sum) / roz;
	return res;
}
int zadanie3() {
	double res = 0.;
	const int roz = 10;
	int tab[roz] {10,21,30,40,50,60,70,80,90,100};
	res = srednia(tab,roz);
	cout << res << endl;
	//3. Napisz funkcję srednia(), która przyjmie jako argumenty tablicę liczb całkowitych i jej rozmiar, po czym zwróci średnią arytmetyczną elementów w tej tablicy
	return 0;
}

int ile_wielkszych(int tab[],int roz,int n) {
	int wynik = 0;
	for (int i = 0; i < roz; i++){
		if (n < tab[i]) {
			++wynik;
		}
	}
	return wynik;
}
int zadanie4() {
	const int roz = 10;
	int tab[roz]{ 10,21,30,40,50,60,70,80,90,100 };
	int n = 0;
	int wynik = 0;
	cout << "Podaj liczbe: ";
	cin >> n;
	wynik = ile_wielkszych(tab,roz,n);
	cout << "Jest " << wynik << " liczb wiekszych od " << n << endl;
	//4. Napisz funkcję ile wiekszych(), która przyjmie jako argumenty tablicę liczb całkowitych, jej rozmiar i liczbę n, 
	//po czym zwróci informację ile elementów w tablicy jest większych od n.
	return 0;
}

int ile_wspolnych(int tab1[], int roz1,int tab2[],int roz2) {
	int wynik = 0;
	for (int i = 0; i < roz1; ++i){
		for (int j = 0; j < roz2; ++j) {
			if (tab1[i] == tab2[j]){
				++wynik;
			}
		}
	}
	return wynik;
}
int zadanie5() {
	int wynik = 0;
	const int roz1 = 10;
	const int roz2 = 10;
	int tab1[roz1] = { 1,2,3,4,5,6,7,8,9,10 };
	int tab2[roz2] = { 5,6,7,8,9,10,11,12,13,14 };
	wynik = ile_wspolnych(tab1, roz1, tab2, roz2);
	cout << "Tablice maja " << wynik<< " wspolnych wartosci." << endl;
	//5. Napisz funkcje ile_wspolnych(), ktora przyjmie 2 tablice liczb calkowitych(wraz z niezbednymi do ich przetworzenia informacjami),
	//po czym zwroci informacje ile elementow z pierwszej tablicy wystepuje w drugiej.
	return 0;
}

void swap(int *a,int *b){
	int buffer = 0;
	buffer = *a;
	*a = *b;
	*b = buffer;
}
int zadanie6() {
	int a = 5;
	int b = 10;
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;
//6. Napisz funkcje swap(), ktora zamieni wartosci 2 zmiennych miejscami.Przykladowe uzycie :
//int a = 5, b = 10;
//swap(&a, &b);
//std::cout << a << std::endl; //powinno wypisac 10
//std::cout << b << std::endl; //powinno wypisac 5
	return 0;
}

int idx_min(int tab[],int roz) {
	int ind = 0;
	int najmniejszy = tab[1];
	for (int i = 1; i < roz; i++){
		if (najmniejszy > tab[i]) {
			najmniejszy = tab[i];
			ind = i;
		}
	}

	return ind;
}
int zadanie7() {
	int rozwiaznie = 0;
	const int roz = 10;
	int tab[roz]{ 10,11,13,13,1,11,16,17,18,5 };
	rozwiaznie = idx_min(tab, roz);
	cout << "Najmneijszy element ma index: " << rozwiaznie << endl;
	//7. Napisz funkcję idx_min(), ktora przyjmie tablicę i jej rozmiar, a następnie zwroci _indeks_ najmniejszego elementu w tej tablicy.
	return 0;
}

int zadanie8() {
	//8. Napisz funkcje sortuj(), ktora przyjmie tablice i jej rozmiar, a nastepnie posortuje zawartosc tablicy dowolnym wybranym algorytmem sortowania roznym od babelkowego.Sugerowane algorytmy :
	//https://pl.wikipedia.org/wiki/Sortowanie_przez_wybieranie
	//https://pl.wikipedia.org/wiki/Sortowanie_przez_wstawianie
	//Duza lista algorytmow sortujacych dostepna jest tu :
	//https://en.wikipedia.org/wiki/Sorting_algorithm
	//Ciekawskim polecam sprobowac zaimplementowac bogosort.;)
	return 0;
}

int main() {
	zadanie1();
	zadanie2();//ok
	zadanie3();//ok
	zadanie4();//ok
	zadanie5();//ok
	zadanie6();//ok
	zadanie7();//ok
	zadanie8();
}
