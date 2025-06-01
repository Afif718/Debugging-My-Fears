#include<bits/stdc++.h>
using namespace std;

int main(){
    char a;
    cin >> a;

    int ascii_val =  (int) a;

    if(ascii_val >= 48 && ascii_val <=57){
        cout << "IS DIGIT";
    }

    if(ascii_val >= 65 && ascii_val <=90){
        cout << "ALPHA\nIS CAPITAL";
    }

    if(ascii_val >= 97 && ascii_val <=122){
        cout << "ALPHA\nIS SMALL";
    }
    
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M