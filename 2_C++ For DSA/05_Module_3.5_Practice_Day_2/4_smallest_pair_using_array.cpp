#include<bits/stdc++.h>
using namespace std;

int main(){

    int num_of_times;
    cin >> num_of_times; 

    for(int i=1; i<=num_of_times; i++){

    int num;
    cin>> num;

    int arr[num];

    for(int i=0; i<num; i++){
        cin >> arr[i];
    }

    int new_arr_size = (num * (num - 1)) / 2;
    int arr_b[new_arr_size];
    int count=0;

    for(int i=0; i<num; i++){
        for(int j=i; j<num; j++){
            if(i!=j){
                //cout << i+1 << " " << j+1<< "\n";
                //cout << arr[i] + arr[j] + (j+1) - (i+1) << "\n";
                arr_b[count] = arr[i] + arr[j] + (j+1) - (i+1);
                count ++;
            }
            
        }

    }

    // for(int i=0; i<new_arr_size; i++){
    //     cout << arr_b[i] << " ";
    // }


    int min_num = *min_element(arr_b, arr_b+new_arr_size);

    cout << min_num << "\n";

    }

   
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I