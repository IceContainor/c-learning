#include <stdio.h>
#include <string.h>

int main()
{

    char word_1[20], word_2[20], word_3[20];            ///Get the words
    printf("Enter a word:\n");
    scanf("%s", word_1);
    printf("Enter a word:\n");
    scanf("%s", word_2);
    printf("Enter a word:\n");
    scanf("%s", word_3);

    char temp_word[20];                                             ///Compare and Sort the words
    if (strcmp(word_1, word_2)<0){
            strcpy(temp_word, word_1);
            strcpy(word_1, word_2);
            strcpy(word_2, temp_word);
    }
    if (strcmp(word_2, word_3)<0){
            strcpy(temp_word, word_2);
            strcpy(word_2, word_3);
            strcpy(word_3, temp_word);
    }
    if (strcmp(word_1, word_2)<0){
            strcpy(temp_word, word_1);
            strcpy(word_1, word_2);
            strcpy(word_2, temp_word);
    }

    printf("<%s>\n<%s>\n<%s>\n", word_1, word_2, word_3);      ///Output

    return 0;

}
