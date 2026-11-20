#include <stdio.h>

int main(){
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }
    char buffer[100];
    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("Read the file: %s", buffer);
    }

    fclose(fp);
}
