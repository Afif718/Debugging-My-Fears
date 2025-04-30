#include<stdio.h>
#include<string.h>

int main(){

    char a[51];
    char b[51];
    scanf("%s %s", a, b);

    printf("%s %s\n", a, b);
    //printf("length of a %d and b %d", strlen(a), strlen(b));

    /*Lets say we have orange apple
    a[0] = o
    a[1] = r
    a[2] = a
    a[3] = n
    a[4] = g
    a[5] = e
    a[6] = \0
    
    a[0] = a
    a[1] = p
    a[2] = p
    a[3] = l
    a[4] = e
    a[5] = \0 
    
    
    So to copy string b to a, take the whole length including /0 which will 
    indicate the end of the string. So if even a is bigger than b, \0 will
    end the string to the size of b. Thats why its i<=strlen(b)


    */

    for(int i=0; i<=strlen(b); i++){
        a[i] = b[i];


    }

    printf("\n%s %s", a, b);

    return 0;
}