#include<stdio.h>

int main(){

    int number_of_times;
    scanf("%d", &number_of_times);

    for(int i=1; i<=number_of_times; i++){
       
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
    
        int m1_farmers_takes = m1*d;
    
       // printf("%d\n", m1_farmers_takes);
    
        int new_total_farmers = m1+m2;
    
        int new_farmers_take= m1_farmers_takes / new_total_farmers;
    
        //printf("%d\n", new_farmers_take);
    
        int less_days_takes = d - new_farmers_take;
    
        printf("%d\n", less_days_takes);
    }

    

    return 0;
}

//problem link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-07/challenges/farmers-1