#include<iostream>
using namespace std;

int main(){
   
    int x;
    cin >> x;

    //if there is only if and else not (else if) then can use ternary
    // (condition) ? True (True code blocl) : False (False code block)
    (x%2==0) ? cout<< "Even\n" : cout << "Odd\n";

    return 0;
}