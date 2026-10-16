#include <stdio.h>
#include <string.h>
int main(){
    char Input[100];
    int count_space=0, count_latter_a=0;
    printf("Enter a sentence:");
    fgets(Input, 100, stdin);
    for (int i=0;i<strlen(Input);i++){
        if (Input[i]==' '){
            count_space ++;
        }
        if (Input[i]=='a'){
            count_latter_a ++;
        }
    }
    printf("Number of spaces:  %d\nNumber of latte a:  %d\n", count_space, count_latter_a);
    return 0;
}
