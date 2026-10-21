#include <stdio.h>
#define NAME_LEN 50

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} part1 = {2026118314, "LYZ", 1},part2 = {2026114415, "Mr.Beast", 1};

int main(){

    printf("Displaying Part 1 Information:\n");
    printf("Number : %d\n", part1.number);
    printf("Name: ");
    puts(part1.name);
    printf("Quantity: %d\n", part1.on_hand);
    printf("\n");

    printf("Displaying Part 2 Information:\n");
    printf("Number : %d\n", part2.number);
    printf("Name: ");
    puts(part2.name);
    printf("Quantity: %d\n", part2.on_hand);
    printf("\n");

    return 0;
}
