#include<stdio.h>

int main(){

    int arr_size, range;
    scanf("%d", &arr_size);

    int arr[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    //print the array
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    
    for(int i=0; i<arr_size; i++){
        if (arr[i] == 1)
        {
            count1++;
        }

        if (arr[i] == 2)
        {
            count2++;
        }

        if (arr[i] == 3)
        {
            count3++;
        }

        if (arr[i] == 4)
        {
            count4++;
        }

        if (arr[i] == 5)
        {
            count5++;
        }
        
    }

    printf("%d --> %d\n", 1, count1);
    printf("%d --> %d\n", 2, count2);
    printf("%d --> %d\n", 3, count3);
    printf("%d --> %d\n", 4, count4);
    printf("%d --> %d\n", 5, count5);

    return 0;
}