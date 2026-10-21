#include <stdio.h>
#define NAME_LEN 50

struct {
    int number;
    char name[NAME_LEN +1];
    int on_hand;
} part1, part2;

int main()
{
    printf("Enter Part 1 information:\n");
    printf("Enter number: ");
    scanf("%d", &part1.number);
    printf("Enter name:");
    scanf("%s", &part1.name);
    printf("Enter quantity:");
    scanf("%d", &part1.on_hand);
    printf("\n");

    printf("Enter Part 2 information:\n");
    printf("Enter number: ");
    scanf("%d", &part2.number);
    printf("Enter name:");
    scanf("%s", &part2.name);
    printf("Enter quantity:");
    scanf("%d", &part2.on_hand);
    printf("\n");

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
