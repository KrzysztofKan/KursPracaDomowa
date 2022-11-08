#include <iostream>

using namespace std;

int zadanie1() {
	double x = 0;
	double y = 0;
	double p = 0;
	char ch = 253;
	cout << "Podaj 2 rozmiary dla bokow trojkata porstokatnego: ";
	cin >> x;
	cin >> y;

	p = x * y/2;
	cout << p <<"cm" << ch << endl;
	cout << "----------";
	return 0;
}

int zadanie2() {
	int N = 0;
	int K = 0;
	cout << "Podaj 2 liczby N i K: ";
	cin >> N;
	cin >> K;
	if (K == 0) {
		cout << "Nie mozemy dzielic przez 0 :)" << endl;
	}
	else {
		if( N % K == 0){
			cout << "N jest podzielne na K" << endl;
		}
		else {
			cout << "N nie jest podzielne na K" << endl;
		}
	}
	cout << "----------";
	return 0;
}

int zadanie3() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Podaj 3 boki dla trojkata a,b,c : ";
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c) {
		cout << "Trojkat jest mozliwy :)";
	}
	else {
		cout << "trojkat jest nie mozliwy :(";
	}	
	cout << "----------";
	return 0;
}

int zadanie4() {
	int A = 0;
	int B = 0;
	cout << "Podaj zakres liczba A i B: ";
	cin >> A;
	cin >> B;

	for (A; A < B + 1; ++A){
		if (A % 3 == 0 || A % 5 ==0){
			cout << A << endl;
		}
	}
	cout << "----------";
	return 0;
}

int zadanie5() {
	int i = 1;
	int max = 100;
	for  (i = 1; i < max + 1 ; i++){
		if (i % 3 == 0) {
			cout << "Hopsasa";
		}

		if (i % 5 == 0) {
			cout << "Tralala";
		}

		if (i % 3 != 0 && i % 5 != 0)
		{
			cout << i;
		}
		cout << endl;
	}
	cout << "----------";
	return 0;
}

int zadanie6() {
	int N = 0;
	int digit = 0;
	cout << "Podaj liczbe :";
	cin >> N;
	while (N) {
		digit = N % 10;
		N /= 10;
		cout << digit;
		if (N != 0) {
			cout << ",";
		}
	}
	cout << endl;
	cout << "----------";
	return 0;
}

int zadanie7() {
	int N = 0;
	cout << "Podaj liczbe : ";
	cin >> N;
	
	for (int i = 0; i < N; ++i){
		for (int j = 0; j < N; ++j) {
			if (j % 2 == 0 && i % 2 != 0|| j % 2 != 0 && i % 2 == 0) {//Jezeli tylko I lub J jest podzielna przez 2
				cout << 0;
			}
			if (j % 2 != 0 && i % 2 != 0|| j % 2 == 0 && i % 2 == 0) {//Jezeli I i J sa obie podzielne lub nie podzielne przez 2
				cout << 1;
			}
		}
		cout << endl;
	}
	cout << "----------";
	return 0;
}

int main() {
	zadanie1();
	zadanie2();
	zadanie3();
	zadanie4();
	zadanie5();
	zadanie6();
	zadanie7();
}
