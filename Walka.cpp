#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

class Postac{
public:
    Postac(const string& imie,int zdrowie,int sila){
        MaxHP = zdrowie;
        HP = zdrowie;
        STR = sila;
        name = imie; 
        alive = true;
    }
    
    void wypisz()const{
        cout << name << " " << HP << "/" << MaxHP << " " << STR << endl;
    }
    
    int atak(){
        return STR;
    }   
    
    void otrzymaj_obrazenia(int n){
        HP = HP - n;
        if(HP < 0){
            HP = 0;
            czy_zyje();
        }
    }
    
    bool czy_zyje() const{
        if(HP > 0){
            return true;
        }
        else{
            return false;
        }
    }
    
    void wylecz(int n){
        HP = HP + n;
        if (HP > MaxHP){
            HP = MaxHP;
        }
    }
    
private:
    string name;
    int MaxHP;
    int HP;
    int STR;
    bool alive;
};


int main (){
    
    Postac Goku{"Goku",110,15};
    Postac Vegeta{"Vegeta",110,15};
    
    Goku.wypisz();
    cout << "VS" << endl;
    Vegeta.wypisz();
    
    
    while(Goku.czy_zyje() == 1 || Vegeta.czy_zyje() == 1){
        Vegeta.otrzymaj_obrazenia(Goku.atak());
        if (Vegeta.czy_zyje() == 0){
            break;
        };
        Goku.otrzymaj_obrazenia(Vegeta.atak());
        if (Goku.czy_zyje() == 0){
            break;
        };
    }
    
    if(Vegeta.czy_zyje() == 0){
        cout << "Goku" << " Wygral" << endl;
    }
    if(Goku.czy_zyje() == 0){
        cout << "Vegeta" << " Wygral" << endl;
    }
    
}
 
