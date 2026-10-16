#include <stdio.h>
#include <string.h>
int main()
{

    char string_1[10], string_2[10], string_3[10];
    printf("Enter string 1:");
    scanf("%s", string_1);
    printf("Enter string 2:");
    scanf("%s", string_2);
    printf("Enter string 3:");
    scanf("%s", string_3);

    char string_4[20], string_5[20], string_6[20];
    strcpy(string_4, string_1);   // str4 = str1
    strcat(string_4, string_2);   // str4 = str1 + str2

    strcpy(string_5, string_2);   // str5 = str2
    strcat(string_5, string_3);   // str5 = str2 + str3

    strcpy(string_6, string_3);   // str6 = str3
    strcat(string_6, string_1);   // str6 = str3 + str1

    printf("Added string 1 and string 2: %s\n", string_4);
    printf("Added string 2 and string 3: %s\n", string_5);
    printf("Added string 3 and string 1: %s\n", string_6);


    size_t leng_1 = strlen(string_4);
    size_t leng_2 = strlen(string_5);
    size_t leng_3 = strlen(string_6);

    size_t maxLen = leng_1;
    const char *longest = string_4;

    if (leng_2 > maxLen) { maxLen = leng_2; longest = string_5; }
    if (leng_3 > maxLen) { maxLen = leng_3; longest = string_6; }

    printf("The longest added string is <%s> and its length is %zu.\n",
           longest, maxLen);

    const char *a = string_4, *b = string_5, *c = string_6;
    const char *tmp;

    // 简单冒泡排序（用 strcmp 比较）
    if (strcmp(a, b) > 0) { tmp = a; a = b; b = tmp; }
    if (strcmp(b, c) > 0) { tmp = b; b = c; c = tmp; }
    if (strcmp(a, b) > 0) { tmp = a; a = b; b = tmp; }

    printf("Relationship of added strings: %s < %s < %s\n", a, b, c);

    return 0;

}
