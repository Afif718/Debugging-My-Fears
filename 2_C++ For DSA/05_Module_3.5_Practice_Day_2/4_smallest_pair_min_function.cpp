#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_of_times;
    cin >> num_of_times;
    
    for(int t = 0; t < num_of_times; t++){
        int num;
        cin >> num;
        
        int arr[num];
        for(int i = 0; i < num; i++){
            cin >> arr[i];
        }
        
        int min_result = INT_MAX;
        
        for(int i = 0; i < num; i++){
            for(int j = i+1; j < num; j++){
                int current_result = arr[i] + arr[j] + (j + 1) - (i + 1);
                min_result = min(min_result, current_result);
            }
        }
        
        cout << min_result << "\n";
    }
    
    return 0;
}