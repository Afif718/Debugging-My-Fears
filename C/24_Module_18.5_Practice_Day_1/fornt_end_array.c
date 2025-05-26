#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int l = 0;
    int r = n - 1;
    int turn = 0;

    while(l <= r) {
        if(turn % 2 == 0) {
            printf("%d ", arr[l]);
            l++;
        } else {
            printf("%d ", arr[r]);
            r--;
        }
        turn++;
    }

    return 0;
}


//couldn't able to understand 
//will check later
//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F