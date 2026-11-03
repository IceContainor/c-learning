#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* myStrdup(const char* src) {
    int n, len;
    len = strlen(src);
    n = len + 1;
    char *str = (char *)malloc(n*sizeof(char));
    if (str == NULL) {
        printf("Memory can't be allocated!");
        return NULL;
    }
    strcpy(str, src);
    return str;
}

int main(){
    char sentence[100];
    char *copy;
  	fgets(sentence, 100, stdin);
    copy = myStrdup(sentence);
    if (copy != NULL) {
        printf("%s", copy);
        free(copy);
    }
    return 0;
    
}