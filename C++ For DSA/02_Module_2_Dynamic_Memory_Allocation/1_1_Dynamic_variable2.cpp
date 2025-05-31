#include<bits/stdc++.h>
using namespace std;

int* p;
void fun(){

    int x = 10;
    p = &x;
    cout << "From fun function " << *p << endl; 
    return;
    
}

int main(){

    fun();
    cout << "From main function " << *p << endl; 
    return 0;
}