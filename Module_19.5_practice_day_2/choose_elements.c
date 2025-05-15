#include<stdio.h>

int main(){

    int arr_size, k;
    scanf("%d %d", &arr_size, &k);

    int arr[arr_size];

    long long int sum=0;

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //decending the array 
    for(int i=0; i<arr_size; i++){
        for(int j=i+1; j<arr_size; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<k; i++){
        if(arr[i] > 0) {
            sum += arr[i];
    }
    }

    printf("%lld\n", sum);
    
    return 0;
}
//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C