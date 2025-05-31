#include<bits/stdc++.h>
using namespace std;

int main(){

    //static variable
    int s = 10;
    //dynamic variable
    int *x = new int; //accessing heap memory and getting memory location
    *x = 1010;

    cout << *x << " " << s << endl;

    return 0;
}