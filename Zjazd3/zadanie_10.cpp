#include <iostream>
#include <string>
#include <cstdlib> //std::rand(), std::srand()
#include <ctime> //std::time()

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::srand;
using std::rand;


//10. Napisz program, który przyjmie od użytkownika 3 liczby: N, D i M, a następnie wypisze sumę N rzutów D - ścienną kostką, powiększoną o modyfikator M.
//Przykładowo, dla N = 2, D = 6, M = 1 rzucamy dwoma 6 - ściennymi kostkami, sumujemy wyniki i do tej sumy dodajemy 1.


void rzut(int n,int d,int m ){
    int x = 0;
    int buffer = 0;
    
    for (int i = 0; i < n; i++){
        buffer = rand() % d +1;
        cout << buffer << endl;
        x = x + buffer;
    }
    cout << x + m << '\n';
}

int main() {
    srand(std::time(nullptr));
    int N = 0;
    int D = 0;
    int M = 0;

    cout << "Podaj liczbe rzutow , scian , modyfikator" << endl;
    cin >> N;
    cin >> D;
    cin >> M;

    rzut(N,D,M);


}	
