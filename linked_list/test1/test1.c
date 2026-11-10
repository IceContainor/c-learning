#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact {
    int id;
    char name[30];
    struct Contact *next;
} Contact ;

int main() {
    Contact *head = NULL;
    Contact *tail = NULL;

    int n;
    printf("Enter the number of people:");
    scanf("%d", &n);

    for (int i=0;i<n;i++) {
        Contact *newnode = (Contact *)malloc(sizeof(Contact));
        newnode->next = NULL;
        printf("Enter the ID of contact %d : ", i+1);
        scanf("%d", &newnode->id);
        getchar();
        printf("Enter the name: ");
        fgets(newnode->name, 30, stdin);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    printf("\n");
    Contact *curr = head;
    while (curr != NULL) {
        printf("Name:%s    ID:%d\n\n", curr->name, curr->id);
        curr = curr->next;
    }

    return 0;
}
