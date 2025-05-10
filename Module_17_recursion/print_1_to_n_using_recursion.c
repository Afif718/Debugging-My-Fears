#include<stdio.h>

void count(int i, int n){

    //we will stop the loop if certain condition is met
    //the count function will run n-1 times and then stop using return 
    if(i == n){
        return; // it will stop the loop
    }

    printf("%d\n", i); //we will print the i value
    count(i+1, n); // then call the count function and increase the value of i by 1 
}

int main(){

    int n;
    scanf("%d", &n);

    int i = 1; //count will start from here
    //pass the i value to count function
    count(i, n);
    return 0;
}