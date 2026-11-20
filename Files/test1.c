#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    int id=101;
    char name[]="TOM";

    fprintf(fp, "ID: %d, Name:%s\n", id, name);
    fclose(fp);
}
