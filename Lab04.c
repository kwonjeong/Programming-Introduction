#include <stdio.h>
int htoi(char s[]);

main() {
    char s[10];

    printf("ABCDEF ==> %d\n", htoi("ABCDEF"));
    printf("123456 ==> %d\n", htoi("123456"));
    printf("0100 ==> %d\n", htoi("0100"));
}

int htoi(char s[]) {
    int n = 0;
    int i = 0;
    for (int j = 0; s[j] != 0; j++){
        i = i + 1;
    }
    int j = 0;
    while (i - 1 >= 0) {
        char ch = s[j];
        if (ch >= 48 && ch <= 57){
            n = n * 16 + (ch - 48);
        }
        else if(ch >= 65 && ch <= 70){
            n = n * 16 + (ch - 55);
        }
        j++;
        i--;
    }
    return n;
}
