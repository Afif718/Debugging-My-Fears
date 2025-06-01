#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr_size;
    cin >> arr_size;

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i];
    }

    bool isPalindrome = true;

    int start = 0;
    int end = arr_size - 1;

    while(start < end){
        if(arr[start] != arr[end]){
            isPalindrome = false;
            break;
        }
        start ++;
        end --;
    }

    if(isPalindrome){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}