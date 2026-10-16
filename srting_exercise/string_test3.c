#include <stdio.h>
#include <string.h>

int main()
{

    char sentence[100];                             ///Get the sentence.
    printf("Enter a sentence:\n");
    fgets(sentence, 100, stdin);

    char needle[100] = "is";
    char *ret = strstr(sentence, needle);   ///Search "is"
    if (ret != NULL ){
        printf("I found it!\n");
    }
    else{printf("Not found\n");}

    char alpha = 'a';                               ///Search "a"
    char *ptr = strchr(sentence, alpha);
    if (ptr != NULL){
        printf("I found it!\n");
    }
    else{printf("Not found\n");}
    return 0;
}

