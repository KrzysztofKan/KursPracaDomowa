#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//8. Wyobraźmy sobie robota, który może poruszać się po płaszczyźnie naprzód i obracać w lewo lub prawo o 90 stopni.
//Napisz klasę Robot, która będzie przechowywała informacje o położeniu robota na płaszczyźnie(2 liczby całkowite) oraz
//kierunku, w jakim jest zwrócony(np. 0 - północ(N), 1 - wschód(E), 2 - południe(S), 3 - zachód(W)).
//Klasa powinna udostępniać metody :
//-wypisz() - wypisuje połozenie i zwrot robota,
//-lewo() - zmienia kierunek, w którym zwrócony jest Robot o 90 stopni w kierunku przeciwnym do ruchu wskazówek zegara(np.z północy obracamy się na zachód),
//-prawo() - zmienia kierunek, w którym zwrócony jest Robot o 90 stopni w kierunku zgodnym z ruchem wskazówek zegara(np.z północy obracamy sie na wschód),
//-naprzod() - przemieszcza robota krok w kierunku, w którym obecnie jest zwrócony(przykładowo krok na wschód powoduje zmianę współrzędnych z(x, y) na(x + 1, y)),
//-wykonaj(ciag_instrukcji), gdzie ciag_instrukcji to napis złożony z liter N, P, L oznaczających odpowiednio : Naprzód, Prawo, Lewo(tzn.instrukcja N odpowiada jednemu wywołaniu metody naprzod(), P - prawo(), L - lewo()).
//Wywołanie metody wykonaj() powinno przemieścić robota zgodnie z przekazanymi instrukcjami.
//Przykład :
//	-początkowe położenie robota : (0, 0), zwrot : N,
//	-ciąg instrukcji : NNPNLNPP,
//	-końcowe położenie robota : (1, 3), zwrot : S.

class Robot{
public:
	void wypisz() {
		cout<<"Pozycja: " << x << "." << y << " Kierunek: ";
		if (k==0)
		{
			cout << "N (^)";
		}
		if (k == 1)
		{
			cout << "E (>)";
		}
		if (k == 2)
		{
			cout << "S (v)";
		}
		if (k == 3)
		{
			cout << "W (<)";
		}
		cout << endl;
	};
	void lewo() {
		k = k - 1;
		if (k == -1) {
			k = 3;
		}
	};
	void prawo() {
		k = k + 1;
		if (k == 4) {
			k = 0;
		}
	};
	void naprzod() {
		if (k == 0) {
			x = x + 1;
		}
		if (k == 1) {
			y = y + 1;
		}
		if (k == 2) {
			x = x - 1;
		}
		if (k == 3) {
			y = y - 1;
		}

	};
	void wykonaj(string comenda) {
		for (int i = 0; i < size(comenda); ++i) {
			if (comenda[i] == 'N')
			{
				naprzod();
			}
			if (comenda[i] == 'P')
			{
				prawo();
			}
			if (comenda[i] == 'L')
			{
				lewo();
			}
		}
	};

private:
	int x = 0;
	int y = 0;
	int k = 0;
};







int main() {
	Robot robert;
	string comenda;

	robert.wypisz();

	comenda = "NNPNLNPP";
	robert.wykonaj(comenda);
	robert.wypisz();
}	
