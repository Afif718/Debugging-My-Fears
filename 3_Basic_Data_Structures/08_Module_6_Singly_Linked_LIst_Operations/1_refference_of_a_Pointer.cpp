#include<bits/stdc++.h>
using namespace std;

// Function that takes a reference to a pointer
void fun(int* &p){
    int y = 200;
    p = &y;  // p now points to local variable y
    cout << "In Fun : " << &p << endl;  // prints address of the pointer variable p inside fun
}

int main(){
    int x = 100;
    int* p = &x;  // p initially points to x
    fun(p);       // p is passed by reference, so changes affect original pointer
    cout << "In Main : " << &p << endl; // prints address of p in main

    return 0;
}
