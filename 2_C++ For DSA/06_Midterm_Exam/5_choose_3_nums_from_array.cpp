#include<bits/stdc++.h>
using namespace std;

int main(){

    int num_of_times;
    cin >> num_of_times;

    for(int i=1; i<=num_of_times; i++){

         int arr_size, val;
    cin >> arr_size >> val;

    int arr[arr_size];

    for(int i=0; i < arr_size; i++){
        cin >> arr[i];
    }

    bool isExist = false;

    for(int i=0; i<arr_size; i++){
        for(int j=i+1; j<arr_size; j++){
            for(int k=j+1; k<arr_size; k++){

                if(arr[i] + arr[j] + arr[k] == val){
                    isExist = true;
                    break;
                }
                // cout << i << " " << j << " " << k << endl;
            }
        }
    }

    if(isExist){
        cout << "YES" << "\n";
    } else{
        cout << "NO" << "\n";
    }

   
    }

     return 0;
    
}

//problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-07/challenges/choose-three