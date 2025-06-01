#include<stdio.h>

int main(){

    //number of test cases
    int num_of_test_cases;
    scanf("%d", &num_of_test_cases);

    for(int i=1; i<=num_of_test_cases; i++){
        long long int m,a,b,c;
    scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

    long long int M = m;
    long long int three_nums = a*b*c;

    long long int x = M/(three_nums);
    
    if(M%three_nums == 0){
        printf("%lld\n", x);
    } else{
        printf("-1\n");
    }
    }

    

    return 0;
}

//problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-07/challenges/find-the-missing-number-11-3/problem