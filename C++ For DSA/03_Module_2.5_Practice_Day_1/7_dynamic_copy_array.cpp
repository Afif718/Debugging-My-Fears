#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr_size_a;
    cin >> arr_size_a;

    int *arr_a = new int[arr_size_a];

    for(int i=0; i<arr_size_a; i++){
        cin >> arr_a[i];
    }

    int arr_size_b;
    cin >> arr_size_b;

    int new_arr_size = arr_size_b;

    int *arr_b = new int[arr_size_b];

    //take input of new array b
    for(int i=arr_size_a; i<new_arr_size; i++){
        cin >> arr_b[i];
    }

    //copy the elements of a into b array
    for(int i=0; i<arr_size_a; i++){
        arr_b[i] = arr_a[i];
    }

    

    //print the final array b
    for(int i=0; i<new_arr_size; i++){
        cout << arr_b[i] << " ";
    }

    delete[] arr_a;

    return 0;
}

/*
Question: Take an integer array A of size N as input. 
Then take an integer M as input. You need to take an array B of size M 
and copy all elements of array A to array B. 
Delete the array A and then take input of the rest of the elements of array B. 
After that print array B.
*/