#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string country;
    int jersey;

    //constructor
    Cricketer(string country, int jersey){
        this->country = country;
        this->jersey = jersey;
    }
};

int main(){
    //create dynamic objects
    Cricketer* dhoni = new Cricketer("India", 11);
    Cricketer* kholi = new Cricketer("India", 77);

    //copy whole object using de-referencing 
    *kholi = *dhoni;

    //delete dynamic object 
    delete dhoni;
    
    cout << kholi->country << " " << kholi->jersey << endl;
    return 0;
}