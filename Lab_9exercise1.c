#include <stdio.h>

int main(){
    char text[]="123456789ABCDEFG";
    int Input;
    printf("Enter a number:");
    scanf("%d", &Input);
    printf("Equivslent hex digit: %c\n", text[Input-1]);
    return 0;

}
