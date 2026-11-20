#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct contact {
    int id;
    char name[31];
    struct contact *next;
} Contactor;

void Save_Contact_List(Contactor *head) {
    Contactor *curr = head;
    FILE *contactor_list = fopen("Contactor_List.txt", "w");
    if (contactor_list == NULL) {
        printf("File not found!\n");
        return;
    }
    while (curr != NULL) {
		fprintf(contactor_list ,"%s %d\n", curr->name, curr->id);
        curr = curr->next;
    }
    fclose(contactor_list);
    printf("File saved!\n");
}

void Read_Contact_List() {
    FILE *contactor_list = fopen("Contactor_List.txt", "r");
    if (contactor_list == NULL) {
        printf("File not found!\n");
        return;
    }

    char buffer[100];
    int temp_id;
    char temp_name[31];

    printf("--- Reading from file ---\n");
    while (fgets(buffer, sizeof(buffer), contactor_list) != NULL) {
        if (sscanf(buffer, "%s %d", temp_name, &temp_id) == 2) {
            printf("ID : %d, name : %s\n", temp_id, temp_name);
        }
    }
    fclose(contactor_list);
    printf("-------------------------\n");
}

Contactor* loadList() {
    FILE *fp = fopen("Contactor_List.txt", "r");
    if (fp == NULL) return NULL;

    Contactor *head = NULL, *tail = NULL;
    int temp_id;
    char temp_name[30];

    while (fscanf(fp, "%d %s", &temp_id, temp_name) == 2) {
        Contactor *newNode = (Contactor*)malloc(sizeof(Contactor));
        newNode->id = temp_id;
        strcpy(newNode->name, temp_name);
        newNode->next = NULL;

        // 尾插法重新连起来
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    fclose(fp);
    printf("Contactor list loaded!\n");
    return head;
}

int main(void) {

    loadList();
    Contactor *head = NULL;
    Contactor *tail = NULL;
    Read_Contact_List(head);

    int n;
    printf("Enter the quantity of the contactors");
    scanf("%d", &n);

    for (int i=0;i<n;i++) {
    	Contactor *newnode = (Contactor *)malloc(sizeof(Contactor));
        newnode->next = NULL;
        printf("Enter the id:");
        scanf("%d", &newnode->id);
        printf("Enter the name:");
        scanf("%s", newnode->name);

        if (head == NULL) {
			head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    Save_Contact_List(head);
    Read_Contact_List();

    return 0;
}
