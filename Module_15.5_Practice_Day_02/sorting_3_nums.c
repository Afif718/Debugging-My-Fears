#include<stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x=a;
    int y=b; 
    int z=c;

    int min;
    if(a<=b && a<=c){
        //a is the smallest
        min = a;
        //printf("%d\n", min);
    } else if(b<=a && b<=c){
        //b is the smallest
        min = b;
       // printf("%d\n", b);
    } else{
        //c is the smallest
        min = c;
       // printf("%d\n", c);
    }

    int max;
    if(a>=b && a>=c){
        //b is the biggest
        max = a;
        //printf("%d\n", max);
    } else if(b>=a && b>=c){
        //b is the biggest
        max = b;
       // printf("%d\n", max);
    } else{
        //c is the biggest
        max = c;
       // printf("%d\n", max);
    }

    // Find the median value using pairwise comparisons
    // This works for all cases, including when two or all three values are equal
    int median;
    if ((a >= b && a <= c) || (a <= b && a >= c)){
        median = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)){
        median = b;
    } else {
        median = c;
    }

    printf("%d\n%d\n%d\n", min, median, max);
    printf("\n");
    printf("%d\n%d\n%d\n", x, y, z);


    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T