#include<bits/stdc++.h>
using namespace std;

//normal static array cannot return an array
//but a dynamic array can return an array to the main function
int* dynamic_array(){

    int *arr = new int[5]; //dynamic array declaration 
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    return arr;
}

int main(){
    int* x = dynamic_array();

    for(int i=0; i<5; i++){
        cout << x[i] << " "; 
    }
    return 0;
}