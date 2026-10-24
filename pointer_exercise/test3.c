#include <stdio.h>

void my_strlen(char *str){
    int len=0;
    while (*str != '\0') {
        len++;
        *str++;
    }
    printf("%d", len);
}

int main() {
    char str[100];
    scanf("%s", str);
    my_strlen(str);
    return 0;
}
