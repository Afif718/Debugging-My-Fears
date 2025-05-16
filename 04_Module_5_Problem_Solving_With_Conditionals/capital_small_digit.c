#include<stdio.h>

int main(){

    char c;
    scanf("%c", &c);

    int asci_val = (int) c;

    if(asci_val>= 48 && asci_val <= 57){
        printf("IS DIGIT\n");
    } else if(asci_val>= 65 && asci_val <= 90){
        printf("ALPHA\nIS CAPITAL\n");
    } else if (asci_val>= 97 && asci_val <= 122){
        printf("ALPHA\nIS SMALL\n");
    }

    return 0;
}