#include<stdio.h>
#include<math.h>

int main(){

    //number of test cases
    int num_of_test_cases;
    scanf("%d", &num_of_test_cases);

    for(int i=1; i<=num_of_test_cases; i++){

        int arr_size;
    scanf("%d", &arr_size);
    int arr_a[arr_size];

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr_a[i]);
    }

    //copy the array_a into array_b
    int index_b=0;
    int arr_b[arr_size];
    
    for(int i=0; i<arr_size; i++){
        arr_b[index_b] = arr_a[i];
        //printf("%d", index_b);
        index_b++;
    }

    //printf("%d", index_b);

    //sort the array B in ascending order
    for(int i=0; i<arr_size; i++){
       for(int j=i+1; j<arr_size; j++){
        if( arr_b[i]>arr_b[j]){
            int temp = arr_b[i];
            arr_b[i] = arr_b[j];
            arr_b[j] = temp;
        }
       }
    }
    
    //print array b
    // for(int i=0; i<arr_size; i++){
    //     printf("%d ", arr_b[i]);
    // }

    //another array_c = arr_a[i] - arr_b[j]
    int index_c=0;
    int arr_c[arr_size];
    for(int i=0; i<arr_size; i++){
        arr_c[index_c] = abs(arr_a[i] - arr_b[i]);
        index_c++;
    }

    //print array_c
    for(int i=0; i<arr_size; i++){
        printf("%d ", arr_c[i]);
    }
    printf("\n");
    }

    
    return 0;
}

//problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-07/challenges/difference-array