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

    int left = 0;
    int right = arr_size - 1;

    while(left < right){
        if(arr[left] != arr[right]){
            isPalindrome = false;
            break;
        }
        left ++;
        right --;
    }

    if(isPalindrome){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G