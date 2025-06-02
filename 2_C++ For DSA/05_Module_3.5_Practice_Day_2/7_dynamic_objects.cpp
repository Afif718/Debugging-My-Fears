#include<bits/stdc++.h>
using namespace std;

/*
Cricketer
{
	jersey_no;
	country;
}
*/

class Cricketer{
    public:
    int jersey_no;
    string country;
};

int main(){
    
    //dynamic objects
    Cricketer* dhoni = new Cricketer();
    Cricketer* kohli = new Cricketer();
    
    dhoni->jersey_no = 45;
    dhoni->country = "India";

    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country;


    return 0;
}