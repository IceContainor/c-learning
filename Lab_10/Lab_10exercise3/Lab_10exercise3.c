#include <stdio.h>
#define NAME_LEN 30
struct warehouse {
    int ID;
    char name[NAME_LEN+1];
    int quantity;
};

int main()
{
    struct warehouse warehouse1 = {20, "Disk Drive", 100};
    struct warehouse warehouse2 = {warehouse1.ID+1, .name="Printer", warehouse1.quantity + 10};
    struct warehouse warehouse3 = {warehouse2.ID+1, .name="Printer", warehouse2.quantity + 10};
    struct warehouse warehouse4 = {warehouse3.ID+1, .name="Printer", warehouse3.quantity + 10};
    struct warehouse warehouse5 = {warehouse4.ID+1, .name="Printer", warehouse4.quantity + 10};

    printf("%d\n", warehouse1.name);
    printf("%s\n", warehouse1.name);
    printf("%d\n\n", warehouse1.quantity);

    printf("%d\n", warehouse2.name);
    printf("%s\n", warehouse2.name);
    printf("%d\n\n", warehouse2.quantity);

    printf("%d\n", warehouse3.name);
    printf("%s\n", warehouse3.name);
    printf("%d\n\n", warehouse3.quantity);

    printf("%d\n", warehouse4.name);
    printf("%s\n", warehouse4.name);
    printf("%d\n\n", warehouse4.quantity);

    printf("%d\n", warehouse5.name);
    printf("%s\n", warehouse5.name);
    printf("%d\n\n", warehouse5.quantity);

    return 0;
}
