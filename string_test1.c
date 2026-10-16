#include <stdio.h>
#include <string.h>

int main()
{

    char s1[10], s2[10];
    printf("Enter a word:");
    scanf("%s", s1);
    printf("Enter another word:\n");
    scanf("%s", s2);

    char s3[10];
    strcpy(s3, s1);
    strcat(s3, s2);
    size_t len = strlen(s3);
    printf("Output:\n%s\n", s3);
    printf("Length:\n%zu\n", len);
    return 0;
}
