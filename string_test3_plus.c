#include <stdio.h>
#include <string.h>

int main()
{

    char sentence[100];                             ///Get the sentence.
    printf("Enter a sentence:\n");
    fgets(sentence, 100, stdin);

    char needle[100] = "is";
    char *ret = strstr(sentence, needle);   ///Search "is" and return the position.
    if (ret != NULL ){
        int position = (ret - sentence);
        printf("\"is\" Is At The Position %d\n", position);
    }
    else{printf("\"is\" Is Not found\n");}

    char alpha = 'a';                                           ///Search latter "a" and return the position.
    char *ptr = strchr(sentence, alpha);
    if (ptr != NULL){
         int position = (ptr - sentence);
        printf("The Latter \"a\" Is At The Position %d \n", position);
    }
    else{printf("The Latter \"a\" Is Not found\n");}
    return 0;
}

