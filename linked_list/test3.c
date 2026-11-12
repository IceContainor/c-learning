///insert a new struct
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact {
    int id;
    struct Contact *next;
} Contact ;

int main() {
    Contact *head = NULL;
    Contact  *tail = NULL;

    int quantity;
    printf("Enternthe quantity of students:");
    scanf("%d", &quantity);

    for (int i=0;i<quantity;i++) {
        Contact *newnode = (Contact *)malloc(sizeof(Contact));
        newnode->next = NULL;
        printf("Enter the ID : ");
        scanf("%d", &newnode->id);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
     }

    Contact *curr = head;
    while (curr != NULL) {
        printf("ID:%d\n", curr->id);
        curr = curr->next;
    }

    Contact *newnode = (Contact *)malloc(sizeof(Contact));
    printf("Enter a new ID:");
    scanf("%d", &newnode->id);
    if (head == NULL || head->id > newnode->id) {
        newnode->next = head;
        head = newnode;
    }
    else {
        Contact *needle = head;
        while (needle->next != NULL && needle->next->id < newnode->id) {
            needle = needle->next;
        }
        newnode->next = needle->next;
        needle->next = newnode;
    }

    curr = head;
    while (curr != NULL) {
        printf("ID:%d\n\n", curr->id);
        curr = curr->next;
    }
}
