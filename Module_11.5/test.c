#include <stdio.h>
#include <string.h>

int main() {
    char str[10000001]; // 10^7 + 1 to hold null terminator
    scanf("%s", str);

    int fre_arr[26] = {0}; // Only for a-z

    for (int i = 0; str[i] != '\0'; i++) {
        fre_arr[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (fre_arr[i] != 0) {
            printf("%c : %d\n", 'a' + i, fre_arr[i]);
        }
    }

    return 0;
}
