#include<bits/stdc++.h>
using namespace std;

int main(){

    int *arr = new int[3];
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }

    int *arr_b = new int[5];

    for(int i=0; i<5; i++){
        arr_b[i] = arr[i];
    }

    arr_b[3] = 4;
    arr_b [4] = 5;
    //delete the first array
    delete[] arr;

    for(int i=0; i<5; i++){
        cout << arr_b[i] << " ";
    }
    
    return 0;
}