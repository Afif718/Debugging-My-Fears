#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    scanf("%d", &num);

    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    bool isAlmostLucky = false;

    for(int i=0; i<14; i++){
        if(num % lucky_numbers[i] == 0){
            isAlmostLucky = true;
            break;
        }
    }
    
    if(isAlmostLucky){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}


//struggled a lot to understand
//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/J