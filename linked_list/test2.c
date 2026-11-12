///find the struct
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact {
    int id;
    char name[30];
    struct Contact *next;
} Contact ;

void find_info (Contact *p) {
    int count = 0;
    Contact *find = p;
    printf("Enter a person you want to find :");
    char find_name[30];
    fgets(find_name, 30, stdin);
    find_name[strcspn(find_name, "\n")] = '\0'; ///Delet '\n'
    while (find != NULL) {
        if (strcmp(find_name, find->name) == 0) {
            printf("Name:%s    ID:%d\n\n", find->name, find->id);
            count ++;
            find = find->next;
        }
        else{
            find = find->next;
        }
    }
    if (count == 0) {printf("Infomation not found!");}
}

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
        newnode->name[strcspn(newnode->name, "\n")] = '\0';///Delet '\n'
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
        printf("Name:%s    ID:%d\n\n", curr->name, curr->id);
        curr = curr->next;
    }

    find_info(head);
    return 0;
}
