#include<stdio.h>

int main(){

    // Input size of the first array
    int firstArraySize;
    scanf("%d", &firstArraySize);
    int firstArray[firstArraySize];

    // Input elements of the first array
    for(int i = 0; i < firstArraySize; i++){
        scanf("%d", &firstArray[i]);
    }

    // Input size of the second array
    int secondArraySize;
    scanf("%d ", &secondArraySize);
    int secondArray[secondArraySize];

    // Input elements of the second array
    for(int i = 0; i < secondArraySize; i++){
        scanf("%d", &secondArray[i]);
    }

    // Calculate size for the new merged array
    int mergedArraySize = firstArraySize + secondArraySize;

    // Declare the new merged array
    int mergedArray[mergedArraySize];

    // Copy elements of the first array into the merged array
    //lets say 1 2 3 4 5
    for(int i = 0; i < firstArraySize; i++){
        mergedArray[i] = firstArray[i];
    }

    // Copy elements of the second array into the merged array
    int secondArrayIndex = 0;
    for(int i = firstArraySize; i < mergedArraySize; i++){
        mergedArray[i] = secondArray[secondArrayIndex];
        secondArrayIndex++;
    }

    // Print the merged array
    for(int i = 0; i < mergedArraySize; i++){
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
