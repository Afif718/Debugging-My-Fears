#include<stdio.h>

void print_from_1_to_n(int i, int n){

    if(i == n+1){
        return;
    }


    print_from_1_to_n(i+1, n);  

    //it will print in reverse using call back
   
    // print with space only if not the last element
    if (i == 1) {
        printf("%d", i);  // last element, no space
    } else {
        printf("%d ", i);
    }
    
    
}

int main(){

    int n;
    scanf("%d", &n);

    int i = 1;
    print_from_1_to_n(i, n);
    
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C