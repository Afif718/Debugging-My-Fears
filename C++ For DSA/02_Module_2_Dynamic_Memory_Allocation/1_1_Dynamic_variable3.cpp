#include<bits/stdc++.h>
using namespace std;

int* p;
void fun(){

    int *x = new int; //dynamic variable
    *x = 10;
    p = x;
    cout << "From fun function " << *p << endl; 
    return;
    
}

int main(){

    fun();
    cout << "From main function " << *p << endl; // we will get the value of *p even after calling fun function
    return 0;
}